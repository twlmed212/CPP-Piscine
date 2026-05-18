#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
   std::cout << "Calling Dog Defautl Constuctor" << std::endl;
   brain = new Brain();
}

Dog::Dog(std::string n) {
   std::cout << "Calling Dog Parametrized Constuctor" << std::endl;
   type = n;
   brain = new Brain();
}

Dog::~Dog() {
   std::cout << "Calling Dog Destructor" << std::endl;
   delete brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
   std::cout << "Calling Copy Constructor of Dog" << std::endl;
   this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
   std::cout << "Calling Copy assignment operator of Dog" << std::endl;
    if (this != &other) {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof..." << std::endl;
}


Brain* Dog::getBrain() const {
   return this->brain;
}