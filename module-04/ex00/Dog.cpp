#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    // Default constructor
}

Dog::Dog(std::string n) {
    type = n;
}

Dog::~Dog() {
    // Destructor
}

Dog::Dog(const Dog& other) : Animal(other) {
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    // Copy assignment
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof..." << std::endl;
}

std::string Dog::getType() const{
    return this->type;
}