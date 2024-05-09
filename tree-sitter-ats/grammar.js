/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a space
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
 * Creates a rule to optionally match one or more of the rules separated by a space
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
    source_file: ($) => repeat1($.spell_def),
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
    spell_def: ($) =>
      seq($._spell_def_head, "{", field("spell_body", $._spell_def_body), "}"),
    _spell_def_head: ($) =>
      seq(
        "defspell",
        field("spell_name", $.identifier),
        "/",
        field("spell_min_cost", $.zint_literal),
        field("spell_formal_args_list", $.formal_args_list)
      ),
    _spell_def_body: ($) => field("instructions", repeat1($.call)),
    formal_args_list: ($) => seq("(", optional(commaSep($._formal_arg)), ")"),
    _formal_arg: ($) =>
      seq(choice($._literal, $.identifier, $._manna_ref), ":", $.type_name),

    type_name: ($) => /[A-Z][a-z]{3,}/,
  },
});
