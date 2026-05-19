#include "Ice.hpp"
// Implementation
Ice::Ice() : AMateria("ice") {
    // Default constructor
}

Ice::~Ice() {
    // Destructor
}

Ice::Ice(const Ice& other) : AMateria(other) {
    // Copy constructor
}

Ice& Ice::operator=(const Ice& other) {
    // Copy assignment
    if (this != &other) {
        // Copy logic
    }
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
   std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}