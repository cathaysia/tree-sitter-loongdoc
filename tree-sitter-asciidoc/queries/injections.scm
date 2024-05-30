((paragraph) @injection.content
  (#set! injection.include-children)
  (#set! injection.language "asciidoc_inline"))

((line) @injection.content
  (#set! injection.include-children)
  (#set! injection.language "asciidoc_inline"))

((section_block
  (element_attr
    (element_attr_marker)
    (attr_value) @injection.language
    (element_attr_marker))
  (raw_block
    (raw_block_marker)
    (raw_block_body) @injection.content
    (raw_block_marker)))
  (#gsub! @injection.language "%s*,%s*(%w+)%s*" "%1")
  (#vim-match? @injection.language "\\s*,\\s*.*\\s*"))

((section_block
  (element_attr
    (element_attr_marker)
    (attr_value) @injection.language
    (element_attr_marker))
  (raw_block
    (raw_block_marker)
    (raw_block_body) @injection.content
    (raw_block_marker)))
  (#gsub! @injection.language "%s*source%s*,%s*(%w+)%s*" "%1")
  (#vim-match? @injection.language "\\s*source\\s*,\\s*.*\\s*"))
