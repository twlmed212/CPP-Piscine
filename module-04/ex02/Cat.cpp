#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
   std::cout << "Calling Cat Defautl Constuctor" << std::endl;
   brain = new Brain();
}

Cat::Cat(std::string n){
   std::cout << "Calling Cat Parametrized Constuctor" << std::endl;
   type = n;
   brain = new Brain();
}

Cat::~Cat() {
   std::cout << "Calling Cat Destructor" << std::endl;
   delete brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
   std::cout << "Calling Copy Constructor of Cat" << std::endl;
   this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
   std::cout << "Calling Copy assigment operator of Cat" << std::endl;
    if (this != &other) {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}


void Cat::makeSound() const{
    std::cout << "Meow Meow..." << std::endl;
}

Brain* Cat::getBrain() const {
   return this->brain;
}