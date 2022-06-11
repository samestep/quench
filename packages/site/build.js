import * as fs from "fs/promises";
import { createRequire } from "module";
import * as path from "path";

const require = createRequire(import.meta.url);
const from = path.dirname(require.resolve("web-tree-sitter"));

const to = "public";
await fs.mkdir(to, { recursive: true }); // don't throw if it already exists

const filename = "tree-sitter.wasm";
await fs.copyFile(path.join(from, filename), path.join(to, filename));
