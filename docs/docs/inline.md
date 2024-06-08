# Inline

```bnf
inline :== inline_element { inline_element }
inline_element :== replacement
                    | anchor
                    | xref

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

## autolink

```bnf
inline_element ::+ autolink

autolink :== uri
            | labled_uri
            | "\"" uri "\""
            | "\"" labled_url "\""

uri :== url | email

url :== url_protocol url_body
url_protocol :== /\w[\w\d+\.\-][\w\d+\.\-]*:\/\//
            | /www\./i
url_body :== url_segment "." { url_segment "." }
url_segment :== /[^\.\s\[\"]+/

email :== /(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\.){3}(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/

labled_uri :== uri "[" uri_label "]"
uri_label :== { uri_label_ch }
uri_label_ch :== /[^\\]]/ | replacement
```
