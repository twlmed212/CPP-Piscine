#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
   std::cout << "Calling Cat Defautl Constuctor" << std::endl;
}

Cat::Cat(std::string n){
   std::cout << "Calling Cat Parametrized Constuctor" << std::endl;
    type = n;
}

Cat::~Cat() {
   std::cout << "Calling Cat Destructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
   std::cout << "Calling Copy Constructor of Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
   std::cout << "Calling Copy assigment operator of Cat" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}


void Cat::makeSound() const{
    std::cout << "Meow Meow..." << std::endl;
}
