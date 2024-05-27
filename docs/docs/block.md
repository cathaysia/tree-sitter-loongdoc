# Block

Blocks are the basic elements of asciidoc documents. The entire asciidoc document can be viewed as a stacked block.
Blocks are either parallel or nested.

```js
document: $ => choice($.document_title, $.section_block)
```

## Section block

```js
section_block: $ =>
  seq(max_repeat(2, choice($.block_title, $.block_attr)), $.block_body)
block_body: $ =>
  choice(
    $.section_title,
    $.block_macro,
    $.line_comment,
    $.block_comment,
    $.list,
    $.paragraph,
    $.table,
    $.admonition,
    $.raw_block,
    $.delimited_block,
    $.pass_block,
    $.breaks,
    $.description_list,
    $.document_attr
    $.quotes_block
    $.open_block
  )
block_title: $ => seq(/^\./, token.immediate($.line))
block_attr: $ => seq(/^\[/, $.line, ']')

document_attr: $ => repeat(choice($.attr, $.block_macro))
attr: $ => seq(':', $.attr_name, ':', ' ', $.escaped_line)
attr_name: $ => /!?[\w\d]+!?/
```

## Document Title

Document Title has the following structure:

```js
document_title: $ =>
  seq(
    seq('#', ' ', $.line),
    optional($.author),
    $.document_attr,
  )
```

An escaped_line can in this form:

```
one line \
continue line
```

## Section Title

```js
section_title: $ => seq(/^={1,6}/, ' ', $.line)
```

## Bock macro

block macro occupies one line:

```js
block_macro: $ => seq($.name, '::', $.target, '[', $.inline, ']')
```

## Paragraph

```js
paragraph: $ => repeat1($.line, optional($.quoted_line))
quoted_line: $ => seq("--", $.line)
```

## List

```js
list: $ => repeat1(req(
  $.list_marker,
  token.immediate(' '),
  choice(
    $.paragraph
    $.description_list,
  )
))

list_marker: $ =>
  choice($.unordered_list_marker, $.ordered_marker, $.checked_list_marker)

unordered_list_marker: $ => repeat1(choice('-', ''))

ordered_marker: $ =>
  choice(
    '.',
    /\d+/,
    /\w/,
    /[\x{3b1} - \x{3c9}]/, // α - ω
  )

checked_list_marker: $ =>
  seq(
    $.unordered_list_marker,
    token.immediate(' '),
    '[',
    choice('x', '*', ' '),
    ']',
  )
```

## comment

```js
line_comment: $ => seq('//', $.line)
block_comment: $ => seq('////', repeat($.line), '////')
```

## Admonition

```js
admonition: $ => seq(
    $.admonition_type,
    $.paragraph
)
admonition_type: $ => choice(
    "NOTE",
    "TIP",
    "IMPORTANT",
    "CAUTION"
    "WARNING",
)
```

## Table

```js
table: $ => seq('|===', repeat($.table_row), '|===')
table_row: $ => repeat1($.table_cell)
table_cell: $ => seq($.cell_attr, '|', $.cell_content)
```

!!! note

    complete inside table

## Raw block

The contents of the raw block are always interpreted as plaintext.

```js
raw_block: $ => seq(
  $.raw_block_delimiter,
  repeat($.line),
  $.raw_block_delimiter
  repeat($.callout)
)

raw_block_delimiter: $=>
  repeat_min(4, choice(
    "-",
    ".",
    "`"
))
callout: $ => seq(
  "<.>",
  " ",
  $.line
)
```

## Delimited Blocks

Delimited Blocks caontains other block inside self.

```js
delimited_block: $ =>
  seq(
    $.delimited_block_delimiter,
    repeat($.document),
    $.delimited_block_delimiter,
  )
delimited_block_delimiter: $ => repeat_min(4, choice('=', '*', '_'))
```

## Pass block

The content in the pass block is always output as is when output.

```js
pass_block: $ =>
  seq($.pass_block_delimiter, repeat($.line), $.pass_block_delimiter)
pass_block_delimiter: $ => repeat_min(4, choice('+'))
```

## breaks

```js
breaks: $ => repeat3(choice('-', '*', '<'))
```

the first char must not be whitespace, then any whitespace are allowed between these chars.

## description list

```js
description_list: $ =>
  seq(/\w+/, '::', choice($.line, $.list, $.inner_description_list))
inner_description_list: $ => seq(/\w+/, ':::', choice($.line, $.list))
```

## block quote

```js
quotes_block: $ => choice(
    seq(
        "____",
        repeat($.line),
        "____"
    ),
    repeat1(
        $.quoted_line
    )
)
quoted_line: $ => seq(
    spaceSep1(">"),
    $.line
)
```

## open block

```js
open_block : $ => seq(
    "--",
    $.document,
    "--"
)
```
