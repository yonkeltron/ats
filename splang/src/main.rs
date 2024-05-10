use color_eyre::eyre::{eyre, Result};

use std::path::PathBuf;

use crate::parser::spellbook::Spellbook;

mod cli;
mod parser;

fn main() -> Result<()> {
  color_eyre::install()?;

  let matches = cli::get_cli_matches();

  match matches.subcommand() {
    Some(("parse", parse_matches)) => {
      let file_path = parse_matches
        .get_one::<PathBuf>("file_path")
        .ok_or_else(|| eyre!("Unable to extract file_path argument"))?
        .to_path_buf();

      println!("Reading {}\n", file_path.display());

      let spellbook = Spellbook::new_from_file_path(file_path)?;
      println!("{:#?}", spellbook);

      Ok(())
    }
    Some((unknown, _matches)) => unreachable!("Unknown subcommmand: {unknown}"),
    None => unreachable!("Subcommand required"),
  }
}
