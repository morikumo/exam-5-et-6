#include "Warlock.hpp"

Warlock::~Warlock()
{
    std::cout << this->getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const
{
    return (this->_name);
}

const std::string& Warlock::getTitle() const
{
    return (this->_title);
}

void Warlock::setTitle(std::string const &title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

// void Warlock::learnSpell(ASpell *aspell_ptr)
// {
//     book.learnSpell(aspell_ptr);
// }
void Warlock::learnSpell(ASpell *spell)
{
    // vecSpell.push_back(spell);
    sBB.learnSpell(spell);
}

// void Warlock::forgetSpell(std::string name)
// {
//     book.forgetSpell(name);
// }

void Warlock::forgetSpell(std::string spellName)
{
    // if (spellName.empty())
    //     return;
    // size_t i = 0;
    // while (i < vecSpell.size())
    // {
    //     if (spellName == vecSpell[i]->getName())
    //         vecSpell.erase(vecSpell.begin() + i);
    //     i++;
    // }
    sBB.forgetSpell(spellName);
}

// void Warlock::launchSpell(std::string name, ATarget const &atarget_ref)
// {
//     ASpell *temp = book.createSpell(name);
//     if (temp)
//         temp->launch(atarget_ref);
// }
void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
    // if (spellName.empty())
    //         return;
    // size_t i = 0;
    // while (i < vecSpell.size())
    // {
    //     if (spellName == vecSpell[i]->getName())
    //         vecSpell[i]->launch(target);
    //     i++;
    // }
    ASpell *pointeur = sBB.createSpell(spellName);
    if (pointeur)
        pointeur->launch(target);
}






