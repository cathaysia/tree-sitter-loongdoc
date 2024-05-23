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

(breaks) @punctuation.special

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

(document_attr_marker) @punctuation.delimiter

(document_attr
  (attr_name) @property)
