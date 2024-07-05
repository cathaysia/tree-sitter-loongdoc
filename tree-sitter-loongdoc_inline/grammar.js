const { anySep1, commaSep, escaped_ch } = require('../common/common.js')
const autolink = require('./common/autolink.js')

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
// prettier-ignore
const PUNCTUATION_CHARACTERS_ARRAY = [
  '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
  '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
  name: 'loongdoc_inline',
  externals: $ => [$._eof],
  precedences: $ => [
    [$.autolink, $._punctuation],
    [$.passthrough, $._punctuation],
  ],

  rules: {
    inline: $ =>
      repeat1(
        choice(
          $.replacement,
          $._word,
          $.anchor,
          $.autolink,
          $.passthrough,
          $._punctuation,
          $.xref,
          $.emphasis,
          $.ltalic,
          $.monospace,
          $.highlight,
          $.inline_macro,
          $.stem_macro,
          $.footnote,
        ),
      ),
    ...autolink.rules,
    inline_macro: $ =>
      seq(
        choice(
          'kbd',
          'btn',
          'image',
          'audio',
          'video',
          'icon',
          'pass',
          'link',
          'mailto',
          'menu',
          'anchor',
          'xref',
          'ifdef',
          'ifndef',
          'ifeval',
          'endif',
          // diagram
          'a2s',
          'barcode',
          'blockdiag',
          'bpmn',
          'bytefield',
          'd2',
          'dbml',
          'diagrams',
          'ditaa',
          'dpic',
          'erd',
          'gnuplot',
          'graphviz',
          'graphviz',
          'lilypond',
          'meme',
          'mermaid',
          'msc',
          'nomnoml',
          'pikchr',
          'plantuml',
          'shaape',
          'smcat',
          'structurizr',
          'svgbob',
          'symbolator',
          'syntrax',
          'tikz',
          'umlet',
          'vega',
          'wavedrom',
        ),
        token.immediate(':'),
        alias(
          repeat(escaped_ch('[', false, $.replacement, $.escaped_ch)),
          $.target,
        ),
        '[',
        alias(
          repeat(
            escaped_ch(']', false, $.replacement, $.autolink, $.escaped_ch),
          ),
          $.attr,
        ),
        ']',
      ),
    footnote: $ =>
      seq(
        choice('footnote', 'footnoteref'),
        token.immediate(':'),

        alias(
          repeat(escaped_ch('[', false, $.replacement, $.escaped_ch)),
          $.target,
        ),
        '[',
        alias(
          repeat(
            escaped_ch(']', false, $.replacement, $.autolink, $.escaped_ch),
          ),
          $.attr,
        ),
        ']',
      ),
    stem_macro: $ =>
      seq(
        choice('latexmath', 'stem', 'asciimath'),
        token.immediate(':'),
        alias(
          repeat(escaped_ch('[', false, $.replacement, $.escaped_ch)),
          $.target,
        ),
        '[',
        alias(/[^\]]*/, $.attr),
        ']',
      ),
    replacement: $ =>
      seq(
        '{',
        alias(token(repeat1(escaped_ch('}'))), $.intrinsic_attributes),
        '}',
      ),
    _word: $ => choice($._word_no_digit, $._digits, $.escaped_ch),
    _word_no_digit: $ =>
      new RegExp(
        '[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+(_+[^' +
          PUNCTUATION_CHARACTERS_REGEX +
          ' \\t\\n\\r0-9]+)*',
      ),
    _digits: $ => /[0-9][0-9_]*/,
    escaped_ch: $ =>
      choice(
        echar('+++'),
        echar('``'),
        echar('**'),
        echar('$$'),
        echar('##'),
        echar('__'),
        echar('<<'),
        echar('[['),

        echar('kbd'),
        echar('btn'),
        echar('image'),
        echar('audio'),
        echar('video'),
        echar('icon'),
        echar('pass'),
        echar('link'),
        echar('mailto'),
        echar('menu'),
        echar('stem'),
        echar('latexmath'),
        echar('asciimath'),
        echar('footnote'),
        echar('footnoteref'),
        echar('anchor'),
        echar('xref'),
        echar('ifdef'),
        echar('ifndef'),
        echar('ifeval'),
        echar('endif'),
        /\\./,
      ),
    _punctuation: _ => choice(...PUNCTUATION_CHARACTERS_ARRAY),
    anchor: $ =>
      seq(
        '[[',
        alias(/\w+/, $.id),
        optional(seq(',', alias(/[\w\s ]+/, $.reftext))),
        ']]',
      ),
    // https://stackoverflow.com/a/201378
    key: $ => choice(/[\w\d]+/, '\\]'),
    passthrough: $ =>
      choice(
        seq('+', repeat1(escaped_ch('+', true)), '+'),
        seq('+++', repeat1(escaped_ch('+', true, '\\+++')), '+++'),
        seq('$$', repeat1(escaped_ch('$', true, '\\$$')), '$$'),
      ),
    xref: $ =>
      seq(
        '<<',
        alias(repeat1(escaped_ch(',>')), $.id),
        optional(seq(',', alias(repeat1(escaped_ch('>')), $.reftext))),
        '>>',
      ),

    emphasis: $ =>
      create_text_formatting('*', $.ltalic, $.monospace, $.highlight),
    ltalic: $ =>
      create_text_formatting('_', $.emphasis, $.monospace, $.highlight),
    monospace: $ => create_text_formatting('`'),
    highlight: $ => create_text_formatting('#'),
  },
})

function create_text_formatting(ch, ...args) {
  return choice(
    seq(token(prec(1, ch)), repeat(escaped_ch(ch, true, ...args)), ch),
    seq(ch + ch, repeat(escaped_ch(ch, true, ...args)), ch + ch),
  )
}

function echar(ch) {
  return token(prec(1, '\\' + ch))
}
