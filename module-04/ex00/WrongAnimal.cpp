#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
   std::cout << "Calling WrongAnimal Defautl Constuctor" << std::endl;
}
WrongAnimal::WrongAnimal(std::string n) : type(n){
   std::cout << "Calling WrongAnimal Parametrized Constuctor" << std::endl;
}
WrongAnimal::~WrongAnimal() {
   std::cout << "Calling WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
   std::cout << "Calling Copy Constructor of WrongAnimal" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
   std::cout << "Calling Copy assigment operator of WrongAnimal" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "Booooo.." << std::endl;
}


std::string WrongAnimal::getType() const {
    return this->type;
}
