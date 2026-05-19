#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria {
private:
    // Member variables
public:
    Ice();
    ~Ice();
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif