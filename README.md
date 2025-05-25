# tree-sitter-qf

[![Create release][release]](https://github.com/OXY2DEV/tree-sitter-qf/actions/workflows/release.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)

![Screenshot 2025-05-26 at 12 39 51 AM](https://github.com/user-attachments/assets/1c872df9-0ceb-465f-87bb-bd9ebc148233)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for Vim's quickfix list.

[release]: https://github.com/OXY2DEV/tree-sitter-qf/actions/workflows/release.yml/badge.svg
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix

## 📥 Installation

### 💡 nvim-treesitter

Put this in your `nvim-treesitter` config,

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

Syntax highlighting is guessed from the `file name`(see `@injection.filename`).

But, You can also specify the language for an item by adding `>!language_name!<`(replace `language_name` with the actual language) before the item text.

```txt
 filename.txt | 10 col 5 | >!language_name!< Some text
```

You can use `quickfixtextfunc` to add the this to the quickfix item text. You can see an example setup [here](https://github.com/OXY2DEV/nvim/blob/fc1788c3edc588b092769c40537f3ffe81506327/lua/scripts/quickfix.lua#L94-L297).
