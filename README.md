# tree-sitter-qf

[![CI][ci]](https://github.com/tree-sitter/tree-sitter-qf/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)

Vim's quickfix list grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

[ci]: https://img.shields.io/github/actions/workflow/status/OXY2DEV/tree-sitter-qf/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix

## 📥 Installation

### 💡 nvim-treesitter

Now, put this in your `nvim-treesitter` config,

```lua
local parser_configs = require("nvim-treesitter.parsers").get_parser_configs();

parser_configs.qf = {
    install_info = {
        url = "https://github.com/OXY2DEV/tree-sitter-qf",
        files = { "src/parser.c" },
        branch = "main",
    },
}
```

Now, quit & open Neovim and run this command,

```vim
:TSInstall qf
```

### 💡 manual

1. Install the `tree-sitter` CLI tool.

2. Clone the repository in your machine and `cd` into it.

3. Run `tree-sitter build`(if it tells you to install dependencies then you should install them and retry).

4. Copy the `qf.so` file to `~/.config/nvim/parser/`.

## 💥 Query files(syntax highlighting & injections)

Copy everything inside `queries/` to `~/.config/nvim/queries/qf/` in your machine.

You can also specify the language for an item by adding `>!language_name!<`(replace `language_name` with the actual language) before the item text.

```txt
 filename.txt | 10 col 5 | >!language_name!< Some text
```

You can use `quickfixtextfunc` to add the this to the quickfix list items.

You can see an example setup [here](https://github.com/OXY2DEV/nvim/blob/fc1788c3edc588b092769c40537f3ffe81506327/lua/scripts/quickfix.lua#L94-L297).
