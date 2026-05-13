#include "Animal.hpp"

// Implementation
Animal::Animal() {
    // Default constructor
}
Animal::Animal(std::string n) : type(n){

}
Animal::~Animal() {
    // Destructor
}

Animal::Animal(const Animal& other) {
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    // Copy assignment
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
