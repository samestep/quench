# VS Code extension

Prerequisites:

- [Node][]
- [VS Code][]

The below instructions assume that your VS Code workspace is (the root of) this
repo but your shell cwd is this directory (`editors/code` in this repo).

First install dependencies:

```sh
npm install
```

Then convert the TextMate grammar from YAML to JSON so VS Code can read it:

```sh
npx js-yaml syntaxes/quench.tmLanguage.yaml > syntaxes/quench.tmLanguage.json
```

Next, from VS Code, press F5 to open a new window with this extension loaded.
Open a Quench source file (such as `examples/hello.qn` from this repository) and
observe the syntax highlighting:

![screnshot of hello.qn in VS Code](hello.png)

[node]: https://github.com/nvm-sh/nvm#install--update-script
[vs code]: https://code.visualstudio.com/download
