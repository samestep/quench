const fs = require("fs");
const path = require("path");

const from = path.dirname(require.resolve("web-tree-sitter"));

const to = "dist";
fs.mkdirSync(to, { recursive: true }); // don't throw if it already exists

const filename = "tree-sitter.wasm";
fs.copyFileSync(path.join(from, filename), path.join(to, filename));
