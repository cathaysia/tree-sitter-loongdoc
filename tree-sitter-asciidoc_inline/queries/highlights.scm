(monospace) @markup.raw

(emphasis) @markup.strong
(ltalic) @markup.italic
(highlight) @markup.italic

[
 (link_url)
 (email)
] @markup.link.url @markup.link
(link_label) @markup.link.label

(auto_link
  "["* @punctuation.bracket
  "]"* @punctuation.bracket)

(intrinsic_attributes) @attribute

(replacement
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

(xref
  "<<" @punctuation.bracket
  ">>" @punctuation.bracket)

(xref
  (reftext) @markup.link)

(xref
  (id) @markup.link.label)

(anchor
  "[[" @punctuation.bracket
  "]]" @punctuation.bracket)

(anchor
  "," @punctuation.delimiter)

(anchor
  (id) @markup.link.label)

(anchor
  (reftext) @markup.link)

(inline_macro "xref" @keyword)
(inline_macro "kbd" @keyword)
(inline_macro "btn" @keyword)
(inline_macro "image" @keyword)
(inline_macro "icon" @keyword)
(inline_macro "pass" @keyword)
(inline_macro "link" @keyword)
(inline_macro "mailto" @keyword)
(inline_macro "menu" @keyword)
(inline_macro "latexmath" @keyword)
(inline_macro "asciimath" @keyword)
(inline_macro "footnote" @keyword)
(inline_macro "footnoteref" @keyword)
(inline_macro ":" @punctuation.delimiter)
(inline_macro "[" @punctuation.bracket)
(inline_macro "]" @punctuation.bracket)

(inline_macro
  (target) @label)

(inline_macro
  (attr) @attribute)
