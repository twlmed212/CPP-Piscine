#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    srand(time(NULL));

    Intern     someRandomIntern;
    Bureaucrat mohamed("Mohamed", 1);

    std::cout << "Example from the subject: robotomy request for Bender" << std::endl;
    try {
        AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        mohamed.signForm(*rrf);
        mohamed.executeForm(*rrf);
        delete rrf;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "The intern makes a shrubbery form for home" << std::endl;
    try {
        AForm* scf = someRandomIntern.makeForm("shrubbery creation", "home");
        std::cout << *scf << std::endl;
        mohamed.signForm(*scf);
        mohamed.executeForm(*scf);
        delete scf;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "The intern makes a presidential pardon for Rachid" << std::endl;
    try {
        AForm* ppf = someRandomIntern.makeForm("presidential pardon", "Rachid");
        std::cout << *ppf << std::endl;
        mohamed.signForm(*ppf);
        mohamed.executeForm(*ppf);
        delete ppf;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "The intern is asked for a form that does not exist" << std::endl;
    try {
        AForm* bad = someRandomIntern.makeForm("coffee request", "Said");
        std::cout << *bad << std::endl;
        mohamed.signForm(*bad);
        mohamed.executeForm(*bad);
        delete bad;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Youssef (grade 140) cannot sign or execute a presidential pardon" << std::endl;
    try {
        Bureaucrat youssef("Youssef", 140);
        AForm* ppf = someRandomIntern.makeForm("presidential pardon", "Hamza");
        std::cout << *ppf << std::endl;
        youssef.signForm(*ppf);
        youssef.executeForm(*ppf);
        delete ppf;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "A copy of the intern works the same way" << std::endl;
    try {
        Intern copy(someRandomIntern);
        AForm* rrf = copy.makeForm("robotomy request", "Karim");
        std::cout << *rrf << std::endl;
        mohamed.signForm(*rrf);
        mohamed.executeForm(*rrf);
        delete rrf;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
