#include "Brain.hpp"

// Implementation
Brain::Brain() {
    ideas = new std::string[100];
    std::cout << "Brain Default constructor Called." << std::endl;
}

Brain::~Brain() {
    delete[] ideas;
    std::cout << "Brain destructor Called." << std::endl;

}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor Called." << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assignmet operator called." << std::endl;
    if (this != &other) {
        delete[] this->ideas;
        ideas = new std::string[100];
        for (int i = 0; i < 100; i++){
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

std::string* Brain::getIdeas() const {
    return ideas;
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}