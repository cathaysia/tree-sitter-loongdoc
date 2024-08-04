[
  (monospace)
  (passthrough)
] @markup.raw @nospell

(emphasis) @markup.strong

(ltalic) @markup.italic

(highlight) @markup.italic

[
  (link_url)
  (email)
] @markup.link.url @markup.link

(uri_label) @markup.link.label

[
  "["
  "]"
  "{"
  "}"
  "<<" @punctuation.bracket
  ">>" @punctuation.bracket
] @punctuation.bracket

":" @punctuation.delimiter

(intrinsic_attributes) @string.special

(xref
  (reftext) @markup.link @markup.link.url)

(xref
  (id) @markup.link.label)

[
  "indexterm"
  "indexterm2"
  "kbd"
  "btn"
  "image"
  "audio"
  "video"
  "icon"
  "pass"
  "link"
  "mailto"
  "menu"
  "stem"
  "latexmath"
  "asciimath"
  "footnote"
  "footnoteref"
  "anchor"
  "xref"
  "ifdef"
  "ifndef"
  "ifeval"
  "endif"
  "a2s"
  "barcode"
  "blockdiag"
  "bpmn"
  "bytefield"
  "d2"
  "dbml"
  "diagrams"
  "ditaa"
  "dpic"
  "erd"
  "gnuplot"
  "graphviz"
  "graphviz"
  "lilypond"
  "meme"
  "mermaid"
  "msc"
  "nomnoml"
  "pikchr"
  "plantuml"
  "shaape"
  "smcat"
  "structurizr"
  "svgbob"
  "symbolator"
  "syntrax"
  "tikz"
  "umlet"
  "vega"
  "wavedrom"
  "((("
  ")))"
  "(("
  "))"
] @keyword

(inline_macro
  (target) @label)

(inline_macro
  (attr) @attribute)

(escaped_sequence) @string.escape

(inline_macro
  (target)? @markup.link @markup.link.url
  (attr)? @label)

(stem_macro
  (target)? @label
  (attr)? @markup.raw @nospell)

(footnote
  (target)? @label
  (attr) @attribute)

(term) @attribute

(id_assignment) @label
