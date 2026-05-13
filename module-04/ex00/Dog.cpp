#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
   std::cout << "Calling Dog Defautl Constuctor" << std::endl;
}

Dog::Dog(std::string n) {
   std::cout << "Calling Dog Parametrized Constuctor" << std::endl;
   type = n;
}

Dog::~Dog() {
   std::cout << "Calling Dog Destructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
   std::cout << "Calling Copy Constructor of Dog" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
   std::cout << "Calling Copy assigment operator of Dog" << std::endl;
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