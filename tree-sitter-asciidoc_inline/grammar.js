const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
// prettier-ignore
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
  name: 'asciidoc_inline',

  rules: {
    inline: $ =>
      repeat1(
        choice(
          $.replacement,
          $.word,
          $.inline_anchor_rx,
          $.inline_email_rx,
          $.inline_footnote_macro,
          $.inline_link_macro,
          $.inline_math_macro,
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
    inline_link_macro: $ =>
      seq(choice('link', 'mailto'), ':', /[^\s\[]+/, '[', /[^\]]*/, ']'),
    inline_math_macro: $ =>
      seq(choice('stem', 'latexmath', 'asciimath'), ':', '[', /[^\]]*/, ']'),
  },
})
