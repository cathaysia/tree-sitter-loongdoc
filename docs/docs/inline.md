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

## formatted_text

```js
formatted_text: $ =>
  seq(optional($.element_attr), $.formatter, $.text, $.formatter)
formatter: $ => choice('*', '`', '+', '#', "'", '^', '~', '**', '##', '+++')
```

A single formatter(except ~, ^) must be preceded and followed by valid whitespace or english punctuation, and there is no restriction on a formatter composed of two symbols.

example:

```
this is a *foo*.
         ^ good. here is whitespace or english punctuation
this is not a*foo*
            ^ bad. here is no whitespace or english punctuation

```
