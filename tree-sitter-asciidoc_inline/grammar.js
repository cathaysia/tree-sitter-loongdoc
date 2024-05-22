const { anySep1 } = require('../common/common.js')

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
// prettier-ignore
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
  name: 'asciidoc_inline',
  precedences: $ => [[$.auto_link, $.punctuation]],

  rules: {
    inline: $ =>
      repeat1(
        choice(
          $.replacement,
          $.word,
          $.inline_anchor_rx,
          $.inline_email_rx,
          $.inline_footnote_macro,
          $.inline_image_macro,
          $.inline_kbd_macro,
          $.auto_link,
          $.inline_link_macro,
          $.inline_math_macro,
          $.inline_menu_macro,
          $.punctuation,
        ),
      ),
    replacement: $ => seq('{', /\w+/, '}'),
    word: $ => choice($._word_no_digit, $._digits),
    _word_no_digit: $ =>
      new RegExp(
        '[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+(_+[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+)*',
      ),
    _digits: $ => /[0-9][0-9_]*/,
    punctuation: _ => choice(...PUNCTUATION_CHARACTERS_ARRAY),
    inline_anchor_rx: $ =>
      choice(
        seq('[[', /\w+/, optional(seq(',', /[\w\s ]+/)), ']]'),
        seq('anchor', ':', /\w+/, '[', /[^\]]*/, ']'),
      ),
    // https://stackoverflow.com/a/201378
    inline_email_rx: $ =>
      /(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\.){3}(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/,
    inline_footnote_macro: $ =>
      seq(
        choice('footnote', 'footnoteref'),
        ':',
        optional(field('id', /\w+/)),
        '[',
        choice(seq(/[\w]+/, optional(seq(',', /[^\]]+/))), /[^\]]*/),
        ']',
      ),
    inline_image_macro: $ =>
      seq(
        choice('image', 'icon'),
        ':',
        /[^\[]+/,
        '[',
        repeat(choice(/[^\]]/, '\\[', '\\]')),
        ']',
      ),
    inline_kbd_macro: $ =>
      seq(
        choice('kbd', 'btn'),
        ':',
        '[',
        choice(anySep1($.key, '+'), anySep1($.key, ',')),
        ']',
      ),
    key: $ => choice(/[\w\d]+/, '\\]'),
    auto_link: $ =>
      prec.left(
        choice(
          seq($.link, optional(seq('[', /[^\]]*/, ']'))),
          seq('"', $.link, optional(seq('[', /[^\]\"]*/, ']')), '"'),
        ),
      ),
    link: $ =>
      seq(
        choice('http', 'https', 'file', 'ftp', 'irc'),
        '://',
        prec.right(anySep1($._link_component, '.')),
      ),
    _link_component: $ => /[^\.\s\[]+/,
    inline_link_macro: $ =>
      seq(choice('link', 'mailto'), ':', /[^\s\[]+/, '[', /[^\]]*/, ']'),
    inline_math_macro: $ =>
      seq(choice('stem', 'latexmath', 'asciimath'), ':', '[', /[^\]]*/, ']'),
    inline_menu_macro: $ => seq('menu', ':', /\w+/, '[', /[^\]]*/, ']'),
  },
})
