# tree-sitter-asciidoc

This document describes the specifications of the current tree-sitter-asciidoc implementation.

- This document is intended to summarize the [asciidoc documentation](https://docs.asciidoctor.org/asciidoc/latest/) to produce specifications to guide the development of the tree-sitter-asciidoc.
- This document is intended to provide a reference specification in the absence of a formal specification from asciidoc. This specification should only be used by tree-sitter-asciidoc and has no intention of dividing the current community.
- Anyone's comments and suggestions are welcome.
- Once the official asciidoc specification is generated. This document is automatically invalid

The current summary of specifications is still insufficient and more work is needed.

## The format of the grammar

All specification descriptions in this document use the tree-sitter grammar.js syntax. But there is no guarantee that this syntax will work.

The parts mentioned in the specification do not represent the parts currently implemented by tree-sitter-asciidoc. The implementation is more of a subset of the specification.

If the grammar.js description specification is too complex, it will be marked in the form of annotations.

## benchs

[benchmark](./benchmark/report)
