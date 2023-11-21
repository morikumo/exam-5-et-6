#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
    public :
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
        
    private :
        SpellBook(SpellBook const &other);
        SpellBook &operator=(SpellBook const &other);
        std::vector<ASpell*> _spellBook;
};

#endif