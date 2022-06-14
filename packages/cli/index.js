import { Quench } from "@quench-lang/core";
import language from "@quench-lang/tree-sitter";
import * as fs from "fs/promises";
import Parser from "tree-sitter";
import * as url from "url";

const parser = new Parser();
parser.setLanguage(language);
const quench = new Quench(parser);
const [, , filename] = process.argv;
const uri = url.pathToFileURL(filename);
quench.setText(uri, await fs.readFile(filename, "utf8"));
console.log(quench.getTreeString(uri));
