#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria {
protected:
    std::string _type;

public:
    AMateria();
    // AMateria(std::string const & type);
    ~AMateria();


    // std::string const & getType() const; //Returns the materia type
    // virtual AMateria* clone() const = 0;
    // virtual void use(ICharacter& target);
};

#endif
