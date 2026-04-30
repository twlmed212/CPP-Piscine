#include "ocf.hpp"

Car::Car() {
    std::cout << "Constructor Called with x = 30"
        << std::endl;
}
Car::Car(const Car& src) {
    std::cout << "Copy Constructor Called"
        << std::endl;
    *this = src;
}
Car::~Car() {
    std::cout << "Destructor Called for " << std::endl;
}
Car& Car::operator=(const Car& other) {
    if (this != &other){
        this->x = other.x;
    }

    return *this;
}