import Parser from "web-tree-sitter";

export const main = async () => {
  await Parser.init();
  const parser = new Parser();
  const Quench = await Parser.Language.load("tree-sitter-quench.wasm");
  parser.setLanguage(Quench);
  const sourceCode = 'main := _ => print "Hello, world!";';
  const tree = parser.parse(sourceCode);
  return tree.rootNode.toString();
};
