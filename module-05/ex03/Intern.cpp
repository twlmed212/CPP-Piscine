
#include "Intern.hpp"
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern(){
}

Intern::~Intern() {
}

Intern::Intern(const Intern& other){
    (void)other;
}

Intern& Intern::operator=(const Intern& other){
    (void)other;
    return *this;
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const
{
    const int count = 3;

    const std::string names[count] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (Intern::*creators[count])(const std::string&) const = {
        &Intern::createShrubbery,
        &Intern::createRobotomy,
        &Intern::createPardon
    };

    for (int i = 0; i < count; i++) {
        if (names[i] == name) {
            AForm* form = (this->*creators[i])(target);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return form;
        }
    }
    std::cout << "Intern couldn't create \"" << name
              << "\": unknown form name" << std::endl;
    throw UnknownFormException();
}

AForm* Intern::createRobotomy(const std::string& target) const {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubbery(const std::string& target) const {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createPardon(const std::string& target) const {
    return new PresidentialPardonForm(target);
}

const char* Intern::UnknownFormException::what() const throw() {
    return "Intern: Unknown form name";
}