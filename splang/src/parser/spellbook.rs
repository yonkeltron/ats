use std::{fs, path::Path};

use chumsky::prelude::*;
use color_eyre::eyre::{eyre, Result};

use super::spell::{spell_parser, Spell};

#[derive(Clone, Debug, PartialEq)]
pub struct Spellbook {
  spells: Vec<Spell>,
}

impl Spellbook {
  pub fn new(spells: Vec<Spell>) -> Self {
    Self { spells }
  }

  pub fn new_from_file_path<P: AsRef<Path>>(file_path: P) -> Result<Self> {
    let spellbook_source = fs::read_to_string(file_path)?;
    let parsed = spellbook_parser().parse(spellbook_source).map_err(|e| {
      let err_chars = e.into_iter().map(|c| format!("{c}")).collect::<String>();
      eyre!("Parsing error: {err_chars}")
    })?;

    Ok(parsed)
  }
}

pub fn spellbook_parser() -> impl Parser<char, Spellbook, Error = Simple<char>> {
  spell_parser()
    .padded_by(text::whitespace::<_, Simple<char>>())
    .repeated()
    .at_least(1)
    .map(Spellbook::new)
}
