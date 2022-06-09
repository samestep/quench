import * as fs from "fs/promises";
import * as path from "path";

const copyFileRelative = async (filename, from, to) => {
  await fs.copyFile(path.join(from, filename), path.join(to, filename));
};

const dist = "dist/";
copyFileRelative(
  "tree-sitter.wasm",
  "../../node_modules/web-tree-sitter/",
  dist
);
copyFileRelative("tree-sitter-quench.wasm", "../core/", dist);
