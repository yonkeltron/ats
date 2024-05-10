use chumsky::prelude::*;

#[derive(Clone, Debug, PartialEq)]
pub struct FormalParameter {
  name: String,
  type_name: String,
}

impl FormalParameter {
  pub fn new(raw_name: &str, raw_type_name: &str) -> Self {
    let name = String::from(raw_name);
    let type_name = String::from(raw_type_name);

    Self { name, type_name }
  }
}

pub fn formal_parameter_parser() -> impl Parser<char, FormalParameter, Error = Simple<char>> {
  let ident = text::ident::<char, Simple<char>>().map(String::from);

  ident
    .then_ignore(just(":").padded())
    .then(ident)
    .map(|(name, type_name)| FormalParameter::new(&name, &type_name))
}

#[cfg(test)]
mod tests {
  use super::*;
  use pretty_assertions::assert_eq;

  #[test]
  fn test_parse_formal_parameter() {
    let input = "panda: bamboo";

    let expected = FormalParameter::new("panda", "bamboo");

    let actual = formal_parameter_parser()
      .parse(input)
      .expect("unable to parse formal parameter in test");

    assert_eq!(expected, actual);
  }
}
