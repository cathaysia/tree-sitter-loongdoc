# Inline

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

## inline macro

```js
inline_macro: $ => seq($.name, ':', $.target, $.element_attr)
element_attr: $ => seq('[', $.attribute_list, ']')
```

## replacement

```js
replacement: $ => seq('{', $.name, '}')
```

## anchor

```js
anchor: $ => seq(
    "[[",
    $.id,
    optional(seq(
        ",",
        $.reftext
    ))
    "]]"
)
```

## xref

```js
xref: $ => seq(
    "<<",
    $.id,
    optional(",", $.reftext)
    ">>"
)
```

## autolink

```js
autolink: $ => choice(
    $.url,
    $.labled_url
    seq('"', $.labled_url,'"'),

)
labled_url: $ => seq(
    $.url,
    "[",
    $.link_label,
    "]"
)
```

## formatted text

```js
formatted_text: $ =>
  seq(optional($.element_attr), $.formatter, $.text, $.formatter)
formatter: $ => choice('*', '`', '+', '#', "'", '^', '~', '**', '##', '+++')
```

!!! warning "diff with asciidoctor"

    Here asciidoctor requires that the formatted_text surrounded by single characters must be ascii characters. This restriction is removed here

