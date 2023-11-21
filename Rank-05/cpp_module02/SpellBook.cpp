#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        _spellBook.push_back(spell);
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    if (spellName.empty())
        return;
    size_t i = 0;
    while (i < _spellBook.size())
    {
        if (spellName == _spellBook[i]->getName())
            _spellBook.erase(_spellBook.begin() + i);
        i++;
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    ASpell *pointeur = NULL;
    size_t i = 0;

    while (i < _spellBook.size())
    {
        if (spellName == _spellBook[i]->getName())
            pointeur = _spellBook[i];
        i++;
    }
    return pointeur;
}
