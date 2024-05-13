use chumsky::prelude::*;

use super::literal_value::{literal_value_parser, LiteralValue};

#[derive(Clone, Debug, PartialEq)]
pub enum Instruction {
  Charge(String, usize),
  Cast(String, Vec<LiteralValue>),
  Damage(String, usize),
  Drain(String, usize),
  Fix(String, usize),
  Illuminate(usize),
  Invisible(String, usize),
  Move(String, isize, isize, isize),
  Snuff(usize),
  Visible(String),
}

#[derive(Clone, Debug, PartialEq)]
pub struct InstructionCall {
  instruction: String,
  args: Vec<LiteralValue>,
}

impl InstructionCall {
  pub fn new(raw_instruction: &str, args: Vec<LiteralValue>) -> Self {
    let instruction = String::from(raw_instruction);

    Self { instruction, args }
  }
}

pub fn instruction_call_parser() -> impl Parser<char, InstructionCall, Error = Simple<char>> {
  let ident = text::ident::<char, Simple<char>>().map(String::from);

  ident
    .then(
      literal_value_parser()
        .separated_by(just(" "))
        .allow_trailing()
        .delimited_by(just("["), just("]")),
    )
    .map(|(instruction, args)| InstructionCall::new(&instruction, args))
}

#[cfg(test)]
mod tests {
  use super::*;
  use pretty_assertions::assert_eq;

  #[test]
  fn test_parse_instruction_call() {
    let input = "pnd[1 3.14159 \"panda\" +M]";

    let args = vec![
      LiteralValue::Zint(1),
      LiteralValue::Float(3.14159),
      LiteralValue::Chars(String::from("panda")),
      LiteralValue::MannaPos,
    ];
    let expected = InstructionCall::new("pnd", args);

    let actual = instruction_call_parser()
      .parse(input)
      .expect("unable to parse formal parameter in test");

    assert_eq!(expected, actual);
  }
}
