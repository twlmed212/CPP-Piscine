#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:
    // Member variables
public:
    Ice();
    ~Ice();
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);

};


#endif