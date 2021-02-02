use nom::{
    bytes::complete::is_not, character::complete::char as nom_char, combinator::recognize,
    error::VerboseError, sequence::pair, IResult,
};

fn comment(i: &str) -> IResult<&str, &str, VerboseError<&str>> {
    recognize(pair(nom_char('#'), is_not("\r\n")))(i)
}

// TODO: use nom_locate to return a syntax tree with source locations
pub fn program(i: &str) -> IResult<&str, &str, VerboseError<&str>> {
    comment(i)
}
