use chumsky::prelude::*;

use super::{
  formal_parameter::{formal_parameter_parser, FormalParameter},
  instruction_call::{instruction_call_parser, InstructionCall},
};

#[derive(Clone, Debug, PartialEq)]
pub struct Spell {
  instruction_calls: Vec<InstructionCall>,
  min_manna_cost: usize,
  name: String,
  params: Vec<FormalParameter>,
}

pub fn spell_parser() -> impl Parser<char, Spell, Error = Simple<char>> {
  let spell_name = text::ident::<char, Simple<char>>()
    .map(String::from)
    .then_ignore(just('/'));
  let manna_cost = text::int(10).map(|s: String| s.parse().unwrap());

  let formal_parameters_list = formal_parameter_parser()
    .separated_by(just(";"))
    .allow_trailing()
    .delimited_by(just("("), just(")"))
    .padded_by(text::whitespace::<_, Simple<char>>());

  let spell_body = instruction_call_parser()
    .padded()
    .separated_by(just('\n'))
    .allow_trailing()
    .delimited_by(just("{").padded(), just("}"))
    .padded_by(text::whitespace::<_, Simple<char>>());

  text::keyword("defspell")
    .padded_by(text::whitespace::<char, Simple<char>>().or_not())
    .ignore_then(spell_name)
    .then(manna_cost)
    .then(formal_parameters_list)
    .then(spell_body)
    .padded_by(text::whitespace::<char, Simple<char>>().or_not())
    .map(
      |(((name, min_manna_cost), params), instruction_calls)| Spell {
        instruction_calls,
        min_manna_cost,
        name,
        params,
      },
    )
}

#[cfg(test)]
mod tests {
  use crate::parser::literal_value::LiteralValue;

  use super::*;
  use pretty_assertions::assert_eq;

  #[test]
  fn test_parse_nop_spell() {
    let input = "defspell panda/1 () { nop[] }";

    let actual = spell_parser()
      .parse(input)
      .expect("unable to parse spell in test");

    let expected = Spell {
      name: String::from("panda"),
      min_manna_cost: 1,
      params: vec![],
      instruction_calls: vec![InstructionCall::new("nop", vec![])],
    };

    assert_eq!(actual, expected);
  }

  #[test]
  fn test_parse_nop_spell_with_args() {
    let input = "defspell levitate/1 (target: Thing) { mov[target 0 0 +M] }";

    let actual = spell_parser()
      .parse(input)
      .expect("unable to parse spell in test");

    let expected = Spell {
      name: String::from("levitate"),
      min_manna_cost: 1,
      params: vec![FormalParameter::new("target", "Thing")],
      instruction_calls: vec![InstructionCall::new(
        "mov",
        vec![
          LiteralValue::Identifier(String::from("target")),
          LiteralValue::Zint(0),
          LiteralValue::Zint(0),
          LiteralValue::MannaPos,
        ],
      )],
    };

    assert_eq!(actual, expected);
  }
}
