import * as path from "path";
import language from "tree-sitter-moss/tree-sitter-moss.wasm";
import { LanguageClient } from "vscode-languageclient";

let client;

export const activate = async (context) => {
  client = new LanguageClient(
    "moss",
    "Moss",
    {
      module: context.asAbsolutePath("dist/server.js"),
      args: [context.asAbsolutePath(path.join("dist", language))],
    },
    { documentSelector: [{ scheme: "file", language: "moss" }] }
  );
  client.start();
};

export const deactivate = () => {
  if (!client) {
    return undefined;
  }
  return client.stop();
};
