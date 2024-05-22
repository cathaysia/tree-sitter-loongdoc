(monospace) @markup.raw

(emphasis) @markup.strong
(ltalic) @markup.italic
(highlight) @markup.italic

[
 (link_url)
 (email)
] @markup.link.url @markup.link
(link) @markup.link
(link_label) @markup.link.label

(link_macro
  ":" @punctuation.delimiter
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(link_macro
  "mailto" @keyword)

(link_macro
  "link" @keyword)

(auto_link
  "["* @punctuation.bracket
  "]"* @punctuation.bracket)

(intrinsic_attributes) @attribute

(replacement
  "{" @punctuation.bracket
  "}" @punctuation.bracket)

(xref
  "xref" @keyword)

(xref
  "<<" @punctuation.bracket
  ">>" @punctuation.bracket)

(xref
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(xref
  (id) @markup.link.label
  (reftext) @markup.link)

(anchor
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(anchor
  "[[" @punctuation.bracket
  "]]" @punctuation.bracket)

(anchor
  ":" @punctuation.delimiter)

(anchor
  "," @punctuation.delimiter)

(anchor
  "anchor" @keyword)

(anchor
  (id) @markup.link.label)

(anchor
  (reftext) @markup.link)

(menu_macro
  "menu" @keyword
  ":" @punctuation.delimiter
  (id) @type
  (keys) @markup.raw @nospell)


(kbd_macro
  "kbd" @keyword)

(kbd_macro
  "btn" @keyword)

(kbd_macro
  ":" @punctuation.delimiter
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(kbd_macro
  "+" @punctuation.delimiter)

(kbd_macro
  "+" @punctuation.delimiter)

(kbd_macro
  "," @punctuation.delimiter)

(key) @markup.raw @nospell


(footnote_macro
  "footnote" @keyword)

(footnote_macro
  "footnoteref" @keyword)

(footnote_macro
  ":" @punctuation.delimiter
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(footnote_macro
  "," @punctuation.delimiter)

(footnote_macro
  (id) @markup.link.label)

(footnote_macro
  (reftext) @markup.link)

(math_macro
  "stem" @keyword)

(math_macro
  "latexmath" @keyword)

(math_macro
  "asciimath" @keyword)

(math_macro
  (math) @markup.raw)

(math_macro
  ":" @punctuation.delimiter
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(image_macro
  "image" @keyword)

(image_macro
  "icon" @keyword)

(image_macro
  ":" @punctuation.delimiter
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(image_macro
  (id) @markup.link.label)
