#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    // Default constructor
}

Cat::Cat(std::string n){
    type = n;
}

Cat::~Cat() {
    // Destructor
}

Cat::Cat(const Cat& other) : Animal(other) {
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    // Copy assignment
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}


void Cat::makeSound() const{
    std::cout << "Meow Meow..." << std::endl;
}

std::string Cat::getType() const {
    return this->type;
}