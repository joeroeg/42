#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
    ClapTrap(); // default constructor to prevent creation of ClapTrap without a name

protected:
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;

public:
    ClapTrap(std::string name); // parameterized constructor
    ~ClapTrap(); // destructor
    ClapTrap(const ClapTrap &); // copy constructor
    ClapTrap &operator=(const ClapTrap& other); // assignment operator

    void    attack(std::string const& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    displayStatus() const;

};


#endif
