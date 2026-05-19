#include "ICharacter.hpp"

// Implementation
ICharacter::ICharacter() {
    // Default constructor
}

ICharacter::~ICharacter() {
    // Destructor
}

ICharacter::ICharacter(const ICharacter& other) {
    // Copy constructor
}

ICharacter& ICharacter::operator=(const ICharacter& other) {
    // Copy assignment
    if (this != &other) {
        // Copy logic
    }
    return *this;
}
