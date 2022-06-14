import { Quench } from "@quench-lang/core";
import helloExample from "@quench-lang/examples/hello.qn?raw";
import language from "@quench-lang/tree-sitter/tree-sitter-quench.wasm?url";
import * as monaco from "monaco-editor";
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
  const quench = new Quench(parser);

  const uri = "";
  quench.setText(uri, code.getValue());

  const setAst = (preface) => {
    ast.setValue(`${preface}\n\n${quench.getTreeString(uri)}`);
  };

  setAst("initial text");
  code.onDidChangeModelContent(({ changes }) => {
    const t0 = performance.now();
    quench.setText(uri, code.getValue());
    const t1 = performance.now();

    setAst(
      `${changes.length} change${
        changes.length === 1 ? "" : "s"
      }; re-parsed from scratch in ${t1 - t0} ms`
    );
  });
})();
