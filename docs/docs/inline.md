# Inline

```bnf
inline :== inline_element { inline_element }
inline_element :== replacement
                    | anchor
                    | xref
                    | autolink

replacement :== "{" identifier "}"

anchor :== "[[" anchor_id ["," anchor_reftext] "]]"
anchor_id :== anchor_id_char { anchor_id_char }
anchor_id_char :== /[^\],]/ | "\," | "\]" | "\]]"
anchor_reftext :== anchor_reftext_char { anchor_reftext_char }
anchor_reftext_char :== /[^\]]/ | "\]" | "\]]"

xref :== "<<" xref_id ["," xref_reftext] ">>"
xref_id :== xref_id_char { xref_id_char }
xref_id_char :== /[^,>]/ | "\," | "\>" | "\>>"
xref_reftext :== xref_reftext_char { xref_reftext_char }
xref_reftext_char :== /[^\>]/ | "\>" | "\>>"

autolink :== url
            | labled_url
            | "\"" labled_url "\""
labled_url :== url "[" $.link_label "]"
link_label :== link_label_char { link_label_char }
link_label_char :== /[^\]]/ | "\]"

url :== url_head "://" url_body
url_head :== "http" | "https" | "file" | "ftp" | "irc"
url_body :== /[^\.\s\[>]+/
```

## inline macro

```bnf
inline_element ::+ inline_macro
inline_macro :== name ":" [target] "[" [element_attr] "]"
name :== /\w+/
target :== target_char { target_char }
target_char :== /[^\[]/ | "\["
element_attr :== element_attr_char { element_attr_char }
element_attr_char :== /[^\]]/ | "\]"
```


```js
inline: $ =>
  seq(
    choice(
      $.inline_macro,
      $.replacement,
      $.anchor,
      $.xref,
      $.autolink,
      $.formatted_text,
    ),
  )
```

## formatted text

```bnf
inline_element ::+ formatted_text
formatted_text :== [formatted_text_attr] formatted_element
formatted_text_attr :== "[" text_attr "]"
text_attr :== text_attr_ch { text_attr_ch }
text_attr_ch :== /[^\]]/ | "\]"
formatted_element :== emphasis
                    | ltalic
                    | monospace
                    | highlight
                    | demphasis
                    | dltalic
                    | dmonospace
                    | dhighlight

emphasis :== "*" emphasis_text "*"
emphasis_text :== emphasis_word | ltalic | monospace | highlight
emphasis_word :== emphasis_char { emphasis_char }
emphasis_char :== /[^\*]/ | "\*"

demphasis :== "**" demphasis_text "**"
demphasis_text :== demphasis_word | ltalic | monospace | highlight
demphasis_word :== demphasis_char { demphasis_char }
demphasis_char :== /[^\*]/ | "\*" | "\**"

ltalic :== "_" ltalic_text "_"
ltalic_text :== ltalic_word | ltalic | monospace | highlight
ltalic_word :== ltalic_char { ltalic_char }
ltalic_char :== /[^\_]/ | "\_"

dltalic :== "__" dltalic_text "__"
dltalic_text :== dltalic_word | ltalic | monospace | highlight
dltalic_word :== dltalic_char { dltalic_char }
dltalic_char :== /[^\_]/ | "\_" | "\__"

monospace :== "`" monospace_text "`"
monospace_text :== monospace_word | ltalic | monospace | highlight
monospace_word :== monospace_char { monospace_char }
monospace_char :== /[^\`]/ | "\`"

dmonospace :== "``" dmonospace_text "``"
dmonospace_text :== dmonospace_word | ltalic | monospace | highlight
dmonospace_word :== dmonospace_char { dmonospace_char }
dmonospace_char :== /[^\`]/ | "\`" | "\``"

highlight :== "=" highlight_text "="
highlight_text :== highlight_word | ltalic | highlight | highlight
highlight_word :== highlight_char { highlight_char }
highlight_char :== /[^\=]/ | "\="

dhighlight :== "==" dhighlight_text "=="
dhighlight_text :== dhighlight_word | ltalic | highlight | highlight
dhighlight_word :== dhighlight_char { dhighlight_char }
dhighlight_char :== /[^\=]/ | "\=" | "\=="
===
