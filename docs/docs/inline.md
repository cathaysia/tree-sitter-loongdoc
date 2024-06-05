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

emphasis :== semphasis | demphasis
ltalic :== sltalic | dltalic
monospace :== smonospace | dmonospace
highlight :== shighlight | dhighlight

semphasis :== "*" semphasis_text "*"
semphasis_text :== semphasis_word | ltalic | monospace | highlight
semphasis_word :== semphasis_char { semphasis_char }
semphasis_char :== /[^\*]/ | "\*"

demphasis :== "**" demphasis_text "**"
demphasis_text :== demphasis_word | ltalic | monospace | highlight
demphasis_word :== demphasis_char { demphasis_char }
demphasis_char :== /[^\*]/ | "\*" | "\**"

sltalic :== "_" sltalic_text "_"
sltalic_text :== sltalic_word | emphasis | monospace | highlight
sltalic_word :== sltalic_char { sltalic_char }
sltalic_char :== /[^\_]/ | "\_"

dltalic :== "__" dltalic_text "__"
dltalic_text :== dltalic_word | emphasis | monospace | highlight
dltalic_word :== dltalic_char { dltalic_char }
dltalic_char :== /[^\_]/ | "\_" | "\__"

smonospace :== "`" smonospace_text "`"
smonospace_text :== smonospace_word
smonospace_word :== smonospace_char { smonospace_char }
smonospace_char :== /[^\`]/ | "\`"

dmonospace :== "``" dmonospace_text "``"
dmonospace_text :== dmonospace_word
dmonospace_word :== dmonospace_char { dmonospace_char }
dmonospace_char :== /[^\`]/ | "\`" | "\``"

shighlight :== "=" shighlight_text "="
shighlight_text :== shighlight_word | ltalic | monospace | emphasis
shighlight_word :== shighlight_char { shighlight_char }
shighlight_char :== /[^\=]/ | "\="

dhighlight :== "==" dhighlight_text "=="
dhighlight_text :== dhighlight_word | ltalic | monospace | emphasis
dhighlight_word :== dhighlight_char { dhighlight_char }
dhighlight_char :== /[^\=]/ | "\=" | "\=="
```
