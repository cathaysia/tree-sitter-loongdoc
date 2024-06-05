# Block

Blocks are the basic elements of asciidoc documents. The entire asciidoc document can be viewed as a stacked block.
Blocks are either parallel or nested.

## asciidoc bnf

| Symbol    | Meaning             |
| --------- | ------------------- |
| `::=`     | define a rule       |
| `::+`     | extend a rule       |
| `<rule>`  | rule                |
| `"text"`  | string literal      |
| `text`    | rule                |
| `{}`      | repeat zero or more |
| `[]`      | optional            |
| `/regex/` | regex               |
| `|`       | choice              |

## Block in BNF

```bnf
document :== { block }

block :== section_block

section_block :== {[block_title, block_attr]} block_body
block_title :== /^./+line
block_attr :== /^\[/ {/[^\]]/, '\]'} ']'

block_body :== document_attr
                | admonition
                | open_block
                | pass_block
                | quotes_block
                | paragraph

admonition :== admonition_type ":" /\s+/ line
admonition_type :== "NOTE" | "TIP" | "IMPORTANT" | "CAUTION" | "WARNING"

open_block :== open_block_marker { line } open_block_marker
open_block_marker :== /^\-\-/

pass_block :== pass_block_marker { line } pass_block_marker
pass_block_marker := /^\+\+\+\+/

quotes_block :== quotes_block_marker { line } quotes_block_marker
quotes_block_marker := /^____/

paragraph :== line { line }
```

## document title

```bnf
block ::+ document_title

document_title :== title0 [(author_line reversion_line)] { document_attr }
title0 :== /^#/ line

author_line :== author { ";" author }
author :== first_name [middle_name] [last_name]

reversion_line :==  revnumber "," revdate ":" revremark
revnumber :== _revnumber { _revnumber }
_revnumber :== /[^,]/ | "\,"
revdate :== _revdate { _revdate }
_revdate :== /^:/ | "\:"
revremark :== /[^\r\n]+/

document_attr :== attr { attr }
attr :== /^:/ identifier ':' /\s*/ line
```

## block macro

```bnf
block_body ::+ block_macro

block_macro :== /^<identifier>/ '::' [macro_target] '[' [macro_attr] ']'
macro_target :== _macro_target { _macro_target }
_macro_target :== /[^\[]/ | "\["
macro_attr :== _macro_attr { _macro_attr }
_macro_attr :== /[^\]]/ | "\\]"

```

## table

```bnf
block_body ::+ table

table :== table_marker { table_cell | ntable } table_marker
table_marker :== /^|===/
table_cell :== table_cell_attr+"|" table_cell_content
table_cell_attr :== table_cell_attr_char { table_cell_attr_char }
table_cell_attr_char :== "^" | "_" | /\d+/ | /\w/ | "<" | ">" | "." | "~"

ntable :== ntable_marker { ntable_cell } ntable_marker
ntable_marker :== "!==="
ntable_cell :== table_cell_attr+"!" table_cell_content
```

## list

```bnf
block_body ::+ list

list :== list_marker /\s/ line
list_marker :== ordered_list_marker
                | unordered_list_marker
                | checked_list_marker
ordered_list_marker :== "." | /\d+/ | /[a-z]+/
unordered_list_marker :== "*" | "-"
checked_list_marker :== unordered_list_marker "[" checked_list_status "]"
checked_list_status :== " " | "x" | "*"
```

## comment

```bnf
block_body ::+ line_comment
                | block_comment

line_comment :== /^\/\// line
block_comment :== block_comment_marker { line } block_comment_marker
block_comment_marker :== /^\/\/\/\//
```

## delimited_block

```bnf
block_body ::+ delimited_block

delimited_block :== delimited_block_marker { delimited_block_body } delimited_block_marker
delimited_block_marker :== /^====/
delimited_block_body :== section_block
```

## breaks

```bnf
block_body ::+ breaks

breaks :== breaks_star
            | breaks_dash
            | breaks_quote
            | breaks_angle

breaks_star :== /^*/ "*" "*" "*"
breaks_dash :== /^-/ "-" "-" "-"
breaks_quote :== /^'/ "'" "'" "'"
breaks_angle :== /^</ "<" "<" "<"
```

## listing block

```bnf
block_body ::+ listing_block

listing_block :== listing_block_marker { line | anno_marker } listing_block_marker [ anno_list ]
listing_block_marker :== /^\-\-\-\-/
anno_marker :== [ anno_marker_prefix ] /\s+/ anno_marker_body [ "-->" ]
anno_marker_prefix :== "//" | "#" | "<!--" | ";;"
anno_marker_body :== "<.>"
                    | "<" /\d+/ ">"

anno_list :== { anno_list_item }
anno_list_item :== anno_list_marker /\s+/ line
anno_list_marker :== "<.>"
```

## literal block

```bnf
block_body ::+ literal_block
            | ident_block
literal_block :== literal_block_marker { line | anno_marker } literal_block_marker [ anno_list ]
literal_block_marker :== /^\.\.\.\./
```

## description_list
