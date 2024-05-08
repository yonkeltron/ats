/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function spaceSep1(rule) {
  return seq(rule, repeat(seq(" ", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function spaceSep(rule) {
  return optional(spaceSep1(rule));
}

module.exports = grammar({
  name: "Adaptive_Thaumaturgical_Syntax",
  word: ($) => $.identifier,
  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat1($.call),
    call: ($) =>
      seq(field("instruction", $.instruction), field("args", $._arg_list)),
    instruction: ($) => /[a-z]{3}/,
    identifier: ($) => /[a-z]+/,
    _arg_list: ($) =>
      seq(
        "[",
        optional(spaceSep(choice($._literal, $.identifier, $._manna_ref))),
        "]"
      ),
    _literal: ($) => choice($.string_literal, $._numeric_literal),
    string_literal: ($) => seq('"', repeat(/[^"]/), '"'),
    _numeric_literal: ($) => choice($.zint_literal, $.float_literal),
    zint_literal: ($) => /[+-]?\d+/,
    float_literal: ($) => /[+-]?([0-9]+[.])?[0-9]+/,
    _manna_ref: ($) => choice($.pos_manna, $.neg_manna),
    neg_manna: ($) => /-M/,
    pos_manna: ($) => /\+M/,
  },
});
