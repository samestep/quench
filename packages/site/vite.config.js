import { createRequire } from "module";
import * as path from "path";

const require = createRequire(import.meta.url);

export default {
  resolve: {
    alias: [
      // https://github.com/TypeFox/monaco-languageclient/blob/v1.0.1/vite.config.ts#L7-L10
      {
        find: "vscode",
        replacement: path.join(
          path.dirname(require.resolve("monaco-languageclient")),
          "vscode-compatibility"
        ),
      },
    ],
  },
};
