# Inline

```js
inline: $ => choice($.inline_macro, $.replacement, $.anchor, $.xref, $.autolink)
```

## Inline macro

```js
inline_macro: $ => seq($.name, ':', $.target, '[', $.inline, ']')
```

## Replacement

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
