const { anySep1, commaSep, escaped_ch } = require('../common/common.js')

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
// prettier-ignore
const PUNCTUATION_CHARACTERS_ARRAY = [
  '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
  '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];

module.exports = grammar({
  name: 'asciidoc_inline',
  externals: $ => [$._eof],
  precedences: $ => [
    [$.auto_link, $._punctuation],
    [$.passthrough, $._punctuation],
  ],

  rules: {
    inline: $ =>
      repeat1(
        choice(
          $.replacement,
          $._word,
          $.anchor,
          $.email,
          $.auto_link,
          $.passthrough,
          $._punctuation,
          $.xref,
          $.emphasis,
          $.ltalic,
          $.monospace,
          $.highlight,
          $.inline_macro,
        ),
      ),
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
          'stem',
          'latexmath',
          'asciimath',
          'footnote',
          'footnoteref',
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
        alias(repeat(escaped_ch('[', false, $.replacement)), $.target),
        '[',
        alias(
          repeat(escaped_ch(']', false, $.replacement, $.auto_link)),
          $.attr,
        ),
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
        echar('+'),
        echar('`'),
        echar('``'),
        echar('*'),
        echar('**'),
        echar('$'),
        echar('$$'),
        echar('#'),
        echar('##'),
        echar('_'),
        echar('__'),
        echar('<<'),
        echar('[['),
        echar('['),

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
    email: $ =>
      /(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\.){3}(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/,
    key: $ => choice(/[\w\d]+/, '\\]'),
    auto_link: $ =>
      prec.left(
        choice(
          $.link_url,
          prec(1, seq($.link_url, seq('[', optional($.link_label), ']'))),
          seq(
            '"',
            $.link_url,
            optional(seq('[', optional($.link_label), ']')),
            '"',
          ),
        ),
      ),
    link_label: $ => repeat1(escaped_ch(']', false, $.replacement)),
    link_url: $ =>
      seq(
        choice('http', 'https', 'file', 'ftp', 'irc'),
        '://',
        prec.right(anySep1($._link_component, '.')),
      ),
    _link_component: $ => /[^\.\s\[>]+/,
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
