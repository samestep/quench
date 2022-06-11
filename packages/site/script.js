import { main } from "@quench-lang/core";
import parseWasmUrl from "@quench-lang/tree-sitter/tree-sitter-quench.wasm?url";
import Parser from "web-tree-sitter";

(async () => {
  await Parser.init();
  const parser = new Parser();
  const Quench = await Parser.Language.load(parseWasmUrl);
  parser.setLanguage(Quench);
  document.getElementById("p").innerText = await main(parser);
})();
