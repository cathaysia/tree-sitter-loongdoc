(title0) @markup.heading.1
(title1) @markup.heading.2
(title2) @markup.heading.3
(title3) @markup.heading.4
(title4) @markup.heading.5
(title5) @markup.heading.6

(table_block_marker) @punctuation.special
(table_cell_attr) @attribute
(table_cell
  "|" @punctuation.special)

[
 (breaks)
 (hard_wrap)
] @punctuation.special

(task_list_marker_unchecked) @markup.list.unchecked

(task_list_marker_checked) @markup.list.checked

[
  (list_marker_star)
  (list_marker_hyphen)
  (list_marker_dot)
  (list_marker_digit)
  (list_marker_geek)
  (list_marker_alpha)
] @markup.list

(comment) @comment

[
 (document_attr_marker)
 (element_attr_marker)
 (raw_block_marker)
] @punctuation.delimiter

(document_attr
  (attr_name) @property)

(element_attr
  (attr_value) @attribute)

(block_title
  (block_title_marker) @punctuation.special) @attribute

(raw_block_body) @markup.raw.block

(anno_list_marker) @punctuation.special

(delimited_block) @punctuation.bracket


(block_macro
  (block_macro_name) @keyword
  "::" @punctuation.delimiter
  (target) @markup.link
  "[" @punctuation.bracket
  "]" @punctuation.bracket)


(block_macro_attr
  (name) @attribute
  "=" @punctuation.delimiter
  (value) @variable.parameter)
