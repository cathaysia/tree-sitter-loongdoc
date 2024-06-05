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

emphasis :== monostar | bistar
ltalic :== monoltalic | biltalic
monospace :== monomonospace | bimonospace
highlight :== monohighlight | bihighlight

monostar :== "*" monostar_text "*"
monostar_text :== monostar_word | ltalic | monospace | highlight
monostar_word :== monostar_char { monostar_char }
monostar_char :== /[^\*]/ | "\*"

bistar :== "**" bistar_text "**"
bistar_text :== bistar_word | ltalic | monospace | highlight
bistar_word :== bistar_char { bistar_char }
bistar_char :== /[^\*]/ | "\*" | "\**"

monoltalic :== "_" monoltalic_text "_"
monoltalic_text :== monoltalic_word | emphasis | monospace | highlight
monoltalic_word :== monoltalic_char { monoltalic_char }
monoltalic_char :== /[^\_]/ | "\_"

biltalic :== "__" biltalic_text "__"
biltalic_text :== biltalic_word | emphasis | monospace | highlight
biltalic_word :== biltalic_char { biltalic_char }
biltalic_char :== /[^\_]/ | "\_" | "\__"

monomonospace :== "`" monomonospace_text "`"
monomonospace_text :== monomonospace_word
monomonospace_word :== monomonospace_char { monomonospace_char }
monomonospace_char :== /[^\`]/ | "\`"

bimonospace :== "``" bimonospace_text "``"
bimonospace_text :== bimonospace_word
bimonospace_word :== bimonospace_char { bimonospace_char }
bimonospace_char :== /[^\`]/ | "\`" | "\``"

monohighlight :== "=" monohighlight_text "="
monohighlight_text :== monohighlight_word | ltalic | monospace | emphasis
monohighlight_word :== monohighlight_char { monohighlight_char }
monohighlight_char :== /[^\=]/ | "\="

bihighlight :== "==" bihighlight_text "=="
bihighlight_text :== bihighlight_word | ltalic | monospace | emphasis
bihighlight_word :== bihighlight_char { bihighlight_char }
bihighlight_char :== /[^\=]/ | "\=" | "\=="
```
