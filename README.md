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
:TSInstall lua_patterns
```

### 💡 manual

Copy the `lua_patterns.so` file to `~/.config/nvim/parser/`.

## 💥 Query files(syntax highlighting & injections)

Copy everything inside `queries/` to `~/.config/nvim/queries/qf/` in your machine.

You also need to put this somewhere in your config(preferably in your `init.lua`),

```lua
-- Gets the filetype for the quickfix item.
vim.treesitter.query.add_directive("set-qf-lang!", function (match, _, bufnr, pred, metadata)
    local capture_id = pred[2];
    local node = match[capture_id];

    if not node then
        return;
    end

    local delimiter = vim.treesitter.get_node_text(node, bufnr) or "";
    delimiter = delimiter:gsub("^%s*>!", ""):gsub("!<$", "");

    local ft = vim.filetype.match({
        filename = "a." .. string.lower(delimiter)
    });

    local exceptions = {
        ex = "elixir",
        pl = "perl",
        sh = "bash",
        uxn = "uxntl",
        ts = "typescript"
    };

    metadata["injection.language"] = ft or exceptions[delimiter] or "";
end, { force = true, all = false });
```

