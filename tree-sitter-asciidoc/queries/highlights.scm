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
  (quoted_block_md_marker)
  (quoted_paragraph_marker)
  (open_block_marker)
  (raw_block_marker)
  (quoted_block_marker)
  (ntable_block_marker)
  (anno_marker)
] @punctuation.special

(ntable_cell
  "!" @punctuation.special)

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

[
  (line_comment)
  (comment_block)
] @comment

[
  (document_attr_marker)
  (element_attr_marker)
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


(admonition
  (admonition_important)
  ":") @comment.error

(admonition
  (admonition_warning)
  ":") @comment.warning

(admonition
  (admonition_caution)
  ":") @comment.warning

(admonition
  (admonition_note)
  ":") @comment.note

(admonition
  (admonition_tip)
  ":") @comment.note

((section_block
  (element_attr
    (element_attr_marker) @comment.note
    (attr_value) @attribute @comment.note
    (element_attr_marker) @comment.note)
  (delimited_block
    (delimited_block_marker) @comment.note
    (delimited_block_marker) @comment.note))
  (#vim-match? @attribute "NOTE\|TIP")
)

((section_block
  (element_attr
    (element_attr_marker) @comment.warning
    (attr_value) @attribute @comment.warning
    (element_attr_marker) @comment.warning)
  (delimited_block
    (delimited_block_marker) @comment.warning
    (delimited_block_marker) @comment.warning))
  (#vim-match? @attribute "CAUTION\|WARNING")
)

((section_block
  (element_attr
    (element_attr_marker) @comment.error
    (attr_value) @attribute @comment.error
    (element_attr_marker) @comment.error)
  (delimited_block
    (delimited_block_marker) @comment.error
    (delimited_block_marker) @comment.error))
  (#vim-match? @attribute "IMPORTANT")
)
