import { Moss } from "@moss-lang/core";
import helloExample from "@moss-lang/examples/hello.moss?raw";
import * as monaco from "monaco-editor";
import language from "tree-sitter-moss/tree-sitter-moss.wasm?url";
import Parser from "web-tree-sitter";

const options = { automaticLayout: true, theme: "vs-dark", wordWrap: "on" };

const code = monaco.editor.create(document.getElementById("code"), {
  ...options,
  value: helloExample,
});
const ast = monaco.editor.create(document.getElementById("ast"), {
  ...options,
  readOnly: true,
});

(async () => {
  await Parser.init();
  const parser = new Parser();
  parser.setLanguage(await Parser.Language.load(language));
  const moss = new Moss(parser);

  const uri = "";
  moss.setText(uri, code.getValue());

  const setAst = (preface) => {
    ast.setValue(`${preface}\n\n${moss.getTreeString(uri)}`);
  };

  setAst("initial text");
  code.onDidChangeModelContent(({ changes }) => {
    const t0 = performance.now();
    moss.setText(uri, code.getValue());
    const t1 = performance.now();

    setAst(
      `${changes.length} change${
        changes.length === 1 ? "" : "s"
      }; re-parsed from scratch in ${t1 - t0} ms`
    );
  });
})();
