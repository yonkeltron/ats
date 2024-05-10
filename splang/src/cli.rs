use clap::{command, value_parser, Arg, ArgMatches, Command};

use std::path::PathBuf;

pub fn get_cli_matches() -> ArgMatches {
  command!()
    .about(env!("CARGO_PKG_DESCRIPTION"))
    .author(env!("CARGO_PKG_AUTHORS"))
    .version(env!("CARGO_PKG_VERSION"))
    .arg_required_else_help(true)
    .help_expected(true)
    .propagate_version(true)
    .subcommand_required(true)
    .subcommand(
      Command::new("parse").arg(
        Arg::new("file_path")
          .help("path to ATS file")
          .index(1)
          .required(true)
          .value_name("FILE_PATH")
          .value_parser(value_parser!(PathBuf)),
      ),
    )
    .get_matches()
}
