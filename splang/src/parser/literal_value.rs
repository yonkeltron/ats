use chumsky::prelude::*;

#[derive(Clone, Debug, PartialEq)]
pub enum LiteralValue {
  Chars(String),
  Float(f64),
  Identifier(String),
  MannaNeg,
  MannaPos,
  Zint(isize),
}

pub fn literal_value_parser() -> impl Parser<char, LiteralValue, Error = Simple<char>> {
  let zint =
    text::int(10).map(|z: String| LiteralValue::Zint(z.parse().expect("error parsing zint")));

  let float = text::int(10)
    .then_ignore(just('.'))
    .then(text::digits(10))
    .map(|(whole, part)| format!("{whole}.{part}"))
    .map(|reunited| reunited.parse().expect("error parsing float"))
    .map(LiteralValue::Float);

  let chars_parser = just('"')
    .ignore_then(none_of('"').repeated())
    .then_ignore(just('"'))
    .map(String::from_iter)
    .map(LiteralValue::Chars);

  let identifier = text::ident::<char, Simple<char>>()
    .map(String::from)
    .map(LiteralValue::Identifier);

  let manna_pos = just("+M").map(|_pos| LiteralValue::MannaPos);
  let manna_neg = just("-M").map(|_neg| LiteralValue::MannaNeg);

  chars_parser
    .or(float)
    .or(identifier)
    .or(manna_neg)
    .or(manna_pos)
    .or(zint)
}

#[cfg(test)]
mod tests {
  use super::*;
  use pretty_assertions::assert_eq;

  #[test]
  fn test_parse_chars() {
    let input = "\"panda\"";

    let actual = literal_value_parser()
      .parse(input)
      .expect("unable to parse chars in test");

    let expected = LiteralValue::Chars(String::from("panda"));

    assert_eq!(actual, expected);
  }

  #[test]
  fn test_parse_float() {
    let input = "69.42";

    let actual = literal_value_parser()
      .parse(input)
      .expect("unable to parse float in test");

    let expected = LiteralValue::Float(69.42);

    assert_eq!(actual, expected);
  }

  #[test]
  fn test_parse_identifier() {
    let input = "panda";

    let actual = literal_value_parser()
      .parse(input)
      .expect("unable to parse identifier in test");

    let expected = LiteralValue::Chars(String::from("panda"));

    assert_eq!(actual, expected);
  }

  #[test]
  fn test_parse_manna_neg() {
    let input = "-M";

    let actual = literal_value_parser()
      .parse(input)
      .expect("unable to parse manna neg in test");

    let expected = LiteralValue::MannaNeg;

    assert_eq!(actual, expected);
  }

  #[test]
  fn test_parse_manna_pos() {
    let input = "+M";

    let actual = literal_value_parser()
      .parse(input)
      .expect("unable to parse manna pos in test");

    let expected = LiteralValue::MannaPos;

    assert_eq!(actual, expected);
  }

  #[test]
  fn test_parse_zint() {
    let input = "42";

    let actual = literal_value_parser()
      .parse(input)
      .expect("unable to parse zint in test");

    let expected = LiteralValue::Zint(42);

    assert_eq!(actual, expected);
  }
}
