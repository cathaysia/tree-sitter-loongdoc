# tree-sitter-loongdoc

LoongDoc is normalized asciidoc. LoongDocs make **BEST EFFORT** to keep compatibility with asciidoc.

https://cathaysia.github.io/tree-sitter-loongdoc/

## Usage

add the following lines to your tree-sitter configuration:

```lua
vim.filetype.add({
    extension = {
        adoc = 'loongdoc'
    },
})

local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.loongdoc = {
    install_info = {
        url = 'https://github.com/cathaysia/tree-sitter-loongdoc.git',
        files = { 'tree-sitter-loongdoc/src/parser.c', 'tree-sitter-loongdoc/src/scanner.c' },
        branch = 'master',
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
    },
}
parser_config.loongdoc_inline = {
    install_info = {
        url = 'https://github.com/cathaysia/tree-sitter-loongdoc.git',
        files = { 'tree-sitter-loongdoc_inline/src/parser.c', 'tree-sitter-loongdoc_inline/src/scanner.c' },
        branch = 'master',
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
    },
}
```
