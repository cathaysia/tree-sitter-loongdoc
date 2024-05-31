# tree-sitter-asciidoc

https://docs.asciidoctor.org/asciidoc/latest

## Imperfect functions

As far as I know, the parse cannot:

- block: Unable to parse table_cell correctly.
- block: Unable to parse delimited blocks in delimted blocks.
- inline: Unable to handle correctly for `^[*=]` or `[*=]$` and etc.
