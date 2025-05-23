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

>[!NOTE]
> You won't get syntax highlighting for injections out-of-the box.
>
> See [this](#-default-quickfix-menu-support) if you want that!

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

Now, any quickfix with this format will get syntax highlighting.

```txt
 filename.txt | 10 col 5 | >!language_name!< Some text
```

You can use `quickfixtextfunc` to add the language section(with the language name) to the list items.

You can see an example one [here](https://github.com/OXY2DEV/nvim/blob/fc1788c3edc588b092769c40537f3ffe81506327/lua/scripts/quickfix.lua#L94-L297).

### ✅ Default quickfix menu support

>[!NOTE]
> Text message(e.g. from `vim.diagnostics.setqflist()`) will be highlighted with the file's filetype.
>
> This is inaccurate but there is currently no way to detect if something is a text message.

First, add this somewhere in your config(preferably in your `init.lua`).

```lua
vim.treesitter.query.add_directive("qf-fallback-lang!", function (match, _, bufnr, pred, metadata)
    local capture_id = pred[2];
    ---@type TSNode
    local node = match[capture_id];

    if not node then
        -- Couldn't find node 
        return;
    end

    local parent = node:parent();

    if not parent then
        -- Couldn't find the list item node.
        return;
    end

    local filename = parent:child(0);

    if not filename or filename:type() ~= "filename" then
        -- Filename node doesn't exist or has wrong type.
        return;
    end

    local text = vim.treesitter.get_node_text(filename, bufnr);
    local ft = vim.filetype.match({ filename = text })

    if ft then
        -- Only add it if the filetype is found.
        metadata["injection.language"] = ft;
    end
end, { force = true });
```

Now, copy everything in `queries/` to `~/.config/nvim/queries/qf/`.

Lastly, uncomment the last section of the [injections.scm](https://github.com/OXY2DEV/tree-sitter-qf/blob/main/queries/injections.scm).

