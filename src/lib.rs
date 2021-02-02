use anyhow::{anyhow, Result};
use nom::{error::convert_error, Finish};
use std::{fs::File, io::Read, path::PathBuf};
use structopt::StructOpt;
use thiserror::Error;

mod parser;

#[derive(Debug, StructOpt)]
#[structopt(about)]
struct Opt {
    /// Source file to run as a script
    file: Option<PathBuf>,

    /// Arguments to pass to the script
    args: Vec<String>,
}

// TODO: figure out a nicer way to deal with parser errors
#[derive(Debug, Error)]
#[error("{msg}")]
struct ParseError {
    msg: String,
}

pub fn main() -> Result<()> {
    let opt = Opt::from_args();
    let path = opt.file.ok_or(anyhow!(
        "Quench REPL not yet implemented. Please give a filename."
    ))?;
    let mut file = File::open(path)?;
    let mut contents = String::new();
    file.read_to_string(&mut contents)?;
    let parsed = parser::program(&contents)
        .finish()
        .map_err(|e| ParseError {
            msg: convert_error(contents.as_str(), e),
        })?;
    println!("{:#?}", parsed);
    Ok(())
}
