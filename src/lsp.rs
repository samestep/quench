use lspower::{
    jsonrpc::{Error, ErrorCode, Result},
    lsp::*,
    Client, LanguageServer, LspService, Server,
};
use quench::parser;
use std::{
    collections::HashMap,
    convert::TryFrom,
    sync::{Arc, RwLock},
};
use strum::IntoEnumIterator;
use strum_macros::EnumIter;
use tree_sitter::Node;

enum ServerErrorCode {
    // https://microsoft.github.io/language-server-protocol/specifications/specification-3-16/#responseMessage
    DocNotInCache = -31999,
}

struct Backend {
    #[allow(dead_code)]
    client: Client,
    documents: Arc<RwLock<HashMap<Url, String>>>,
}

#[derive(Clone, Copy, EnumIter)]
enum TokenType {
    Comment,
    String,
    Variable,
}

fn semantic_token_type(token_type: TokenType) -> SemanticTokenType {
    match token_type {
        TokenType::Comment => SemanticTokenType::COMMENT,
        TokenType::String => SemanticTokenType::STRING,
        TokenType::Variable => SemanticTokenType::VARIABLE,
    }
}

struct AbsoluteToken {
    line: u32,
    start: u32,
    length: u32,
    token_type: TokenType,
}

// TODO: test this function
fn semantic_tokens(node: &Node) -> Vec<AbsoluteToken> {
    if let Some(token_type) = match node.kind() {
        // TODO: make these not stringly typed
        "comment" => Some(TokenType::Comment),
        "string" => Some(TokenType::String),
        "identifier" => Some(TokenType::Variable),
        _ => None,
    } {
        let start = node.start_position();
        let end = node.end_position();
        if start.row == end.row {
            return vec![AbsoluteToken {
                // TODO: figure out an alternative to unwrap here
                line: u32::try_from(start.row).unwrap(),
                start: u32::try_from(start.column).unwrap(),
                length: u32::try_from(end.column - start.column).unwrap(),
                token_type,
            }];
        }
    }
    let mut cursor = node.walk();
    node.children(&mut cursor)
        .map(|child| semantic_tokens(&child))
        .flatten()
        .collect()
}

// TODO: test this function
fn make_relative(tokens: Vec<AbsoluteToken>) -> Vec<SemanticToken> {
    let mut relative = vec![];
    let mut it = tokens.iter();
    match it.next() {
        None => relative,
        Some(first) => {
            relative.push(SemanticToken {
                delta_line: first.line,
                delta_start: first.start,
                length: first.length,
                token_type: first.token_type as u32,
                token_modifiers_bitset: 0,
            });
            let mut last_line = first.line;
            let mut last_start = first.start;
            for token in it {
                relative.push(SemanticToken {
                    delta_line: token.line - last_line,
                    delta_start: if token.line == last_line {
                        token.start - last_start
                    } else {
                        token.start
                    },
                    length: token.length,
                    token_type: token.token_type as u32,
                    token_modifiers_bitset: 0,
                });
                last_line = token.line;
                last_start = token.start;
            }
            relative
        }
    }
}

#[lspower::async_trait]
impl LanguageServer for Backend {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        Ok(InitializeResult {
            capabilities: ServerCapabilities {
                text_document_sync: Some(TextDocumentSyncCapability::Kind(
                    TextDocumentSyncKind::Full,
                )),
                semantic_tokens_provider: Some(
                    SemanticTokensServerCapabilities::SemanticTokensOptions(
                        SemanticTokensOptions {
                            work_done_progress_options: WorkDoneProgressOptions {
                                work_done_progress: Some(false),
                            },
                            legend: SemanticTokensLegend {
                                token_types: TokenType::iter().map(semantic_token_type).collect(),
                                token_modifiers: vec![],
                            },
                            range: Some(false),
                            full: Some(SemanticTokensFullOptions::Delta { delta: Some(false) }),
                        },
                    ),
                ),
                ..ServerCapabilities::default()
            },
            server_info: None,
        })
    }

    async fn shutdown(&self) -> Result<()> {
        Ok(())
    }

    async fn did_open(&self, params: DidOpenTextDocumentParams) {
        let doc = params.text_document;
        let docs = Arc::clone(&self.documents);
        let mut docs = docs.write().unwrap(); // TODO: figure out how to log instead of unwrap here
        docs.insert(doc.uri, doc.text);
    }

    async fn did_change(&self, params: DidChangeTextDocumentParams) {
        let uri = params.text_document.uri;
        let text = params
            .content_changes
            .into_iter()
            .map(|x| x.text)
            .collect::<Vec<_>>()
            .join("");
        let docs = Arc::clone(&self.documents);
        let mut docs = docs.write().unwrap(); // TODO: figure out how to log instead of unwrap here
        docs.insert(uri, text);
    }

    async fn did_close(&self, params: DidCloseTextDocumentParams) {
        let docs = Arc::clone(&self.documents);
        let mut docs = docs.write().unwrap(); // TODO: figure out how to log instead of unwrap here
        docs.remove(&params.text_document.uri);
    }

    async fn semantic_tokens_full(
        &self,
        params: SemanticTokensParams,
    ) -> Result<Option<SemanticTokensResult>> {
        let uri = params.text_document.uri;
        let docs = Arc::clone(&self.documents);
        let docs = docs.read().unwrap(); // TODO: figure out how to log instead of unwrap here
        let text = docs.get(&uri).ok_or(Error {
            code: ErrorCode::ServerError(ServerErrorCode::DocNotInCache as i64),
            message: format!("URI not in document cache: {}", uri),
            data: None,
        })?;
        let mut parser = parser::parser();
        // TODO: refactor this to encapsulate the unwrap
        let tree = parser.parse(text, None).unwrap();
        Ok(Some(SemanticTokensResult::Tokens(SemanticTokens {
            result_id: None,
            data: make_relative(semantic_tokens(&tree.root_node())),
        })))
    }
}

#[tokio::main]
async fn main() {
    let (service, messages) = LspService::new(|client| Backend {
        client,
        documents: Arc::new(RwLock::new(HashMap::new())),
    });
    Server::new(tokio::io::stdin(), tokio::io::stdout())
        .interleave(messages)
        .serve(service)
        .await;
}
