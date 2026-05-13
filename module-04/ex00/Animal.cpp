#include "Animal.hpp"

// Implementation
Animal::Animal() {
   std::cout << "Calling Animal Defautl Constuctor" << std::endl;
}
Animal::Animal(std::string n) : type(n){
   std::cout << "Calling Animal Parametrized Constuctor" << std::endl;

}
Animal::~Animal() {
   std::cout << "Calling Animal Destructor" << std::endl;
}

Animal::Animal(const Animal& other) {
   std::cout << "Calling Copy Constructor of Animal" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
   std::cout << "Calling Copy assigment operator of Animal" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "This is just an Animal Blueprint Can't Make sound without an existing animal..." << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
