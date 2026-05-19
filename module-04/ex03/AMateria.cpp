#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
    // Default constructor
}

AMateria::AMateria(std::string const & type) : type(type) {
    // Parameterized constructor
}

AMateria::~AMateria() {
    // Destructor
}

AMateria::AMateria(const AMateria& other) : type(other.type) {
    // Copy constructor

}

AMateria& AMateria::operator=(const AMateria& other) {
    // Copy assignment
    if (this != &other) {
        type = other.type;
    }
    return *this;
}


std::string const & AMateria::getType() const {
    return type;
}