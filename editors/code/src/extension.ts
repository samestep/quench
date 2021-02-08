import { ExtensionContext } from 'vscode';

import { LanguageClient } from 'vscode-languageclient/node';

let client: LanguageClient;

export function activate(_: ExtensionContext) {
  client = new LanguageClient(
    'quench',
    'Quench',
    { command: 'quench-lsp' },
    { documentSelector: [{ scheme: 'file', language: 'quench' }] },
  );
  client.start();
}

export function deactivate(): Thenable<void> | undefined {
  if (!client) {
    return undefined;
  }
  return client.stop();
}
