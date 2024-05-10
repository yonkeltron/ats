use super::spell::Spell;

#[derive(Clone, Debug, PartialEq)]
pub struct Spellbook {
  spells: Vec<Spell>,
}
