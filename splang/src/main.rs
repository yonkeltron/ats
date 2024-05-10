use chumsky::Parser;
use color_eyre::eyre::{eyre, Result};

use std::fs;
use std::path::PathBuf;

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

      let src = fs::read_to_string(file_path)?;
      println!("{}\n", src);
      match parser::spell::spell_parser().parse(src) {
        Ok(parsed) => {
          println!("{:?}", parsed);
          Ok(())
        }
        Err(error) => {
          println!("{:?}", error);
          Err(eyre!("{:?}", error))
        }
      }
    }
    Some((unknown, _matches)) => unreachable!("Unknown subcommmand: {unknown}"),
    None => unreachable!("Subcommand required"),
  }
}
