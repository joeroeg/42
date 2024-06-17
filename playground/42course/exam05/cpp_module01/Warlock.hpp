#pragma once
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class ASpell;

class Warlock {
private:
    std::string _name;
    std::string _title;

    Warlock();
    Warlock & operator=(Warlock const & other);
    Warlock(Warlock const & other);

    std::map <std::string, ASpell * > _SpellBook;

public:
    Warlock(std::string const & name, std::string const & title);
    ~Warlock();

    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const & title);
    void introduce() const;

    void learnSpell(ASpell * spell);
    void forgetSpell(std::string spell);
    void launchSpell(std::string spell, ATarget const & target);
};
