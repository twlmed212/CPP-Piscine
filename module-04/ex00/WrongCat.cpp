#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat"){
   std::cout << "Calling WrongCat Defautl Constuctor" << std::endl;
}

WrongCat::WrongCat(std::string n){
   std::cout << "Calling WrongCat Parametrized Constuctor" << std::endl;
    type = n;
}

WrongCat::~WrongCat() {
   std::cout << "Calling WrongCat  Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
   std::cout << "Calling Copy Constructor of WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
   std::cout << "Calling Copy assigment operator of WrongCat" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}


void WrongCat::makeSound() const{
    std::cout << "Meow Meow..." << std::endl;
}