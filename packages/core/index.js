export class Quench {
  constructor(parser) {
    this.parser = parser;
    this.trees = new Map();
  }

  setText(uri, text) {
    this.trees.set(uri, this.parser.parse(text));
  }

  close(uri) {
    this.trees.delete(uri);
  }

  getTreeRoot(uri) {
    return this.trees.get(uri).rootNode;
  }

  getTreeString(uri) {
    return this.getTreeRoot(uri).toString();
  }
}
