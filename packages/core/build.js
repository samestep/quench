import * as fs from "fs/promises";
import * as path from "path";

const filename = "tree-sitter-quench.wasm";
await fs.copyFile(path.join("..", "tree-sitter", filename), filename);
