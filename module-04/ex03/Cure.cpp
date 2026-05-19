#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
    // Default constructor
}

Cure::~Cure() {
    // Destructor
}

Cure::Cure(const Cure& other) : AMateria(other) {
    // Copy constructor
}

Cure& Cure::operator=(const Cure& other) {
    // Copy assignment
    (void)other;
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}
void Cure::use(ICharacter& target) {
   std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}