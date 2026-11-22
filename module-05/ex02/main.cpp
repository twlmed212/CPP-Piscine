#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));

    std::cout << std::endl << "Youssef (grade 137) tries to execute a form that is not signed" << std::endl;
    try {
        ShrubberyCreationForm shrub("home");
        Bureaucrat youssef("Youssef", 137);
        youssef.executeForm(shrub);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Youssef (grade 137) signs and executes the shrubbery form" << std::endl;
    try {
        ShrubberyCreationForm shrub("home");
        Bureaucrat youssef("Youssef", 137);
        youssef.signForm(shrub);
        youssef.executeForm(shrub);
        std::cout << "Check the file home_shrubbery" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Fatima (grade 145) signs, Omar (grade 138) cannot execute" << std::endl;
    try {
        ShrubberyCreationForm shrub("garden");
        Bureaucrat fatima("Fatima", 145);
        Bureaucrat omar("Omar", 138);
        fatima.signForm(shrub);
        omar.executeForm(shrub);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Karim (grade 45) robotomizes Hamza 5 times (works about half the time)" << std::endl;
    try {
        RobotomyRequestForm robot("Hamza");
        Bureaucrat karim("Karim", 45);
        karim.signForm(robot);
        for (int i = 0; i < 5; i++)
            karim.executeForm(robot);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Nadia (grade 26) tries to sign a pardon that needs grade 25" << std::endl;
    try {
        PresidentialPardonForm pardon("Rachid");
        Bureaucrat nadia("Nadia", 26);
        nadia.signForm(pardon);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Khadija (25) signs, Hassan (6) cannot execute, Driss (5) can" << std::endl;
    try {
        PresidentialPardonForm pardon("Rachid");
        Bureaucrat khadija("Khadija", 25);
        Bureaucrat hassan("Hassan", 6);
        Bureaucrat driss("Driss", 5);
        khadija.signForm(pardon);
        hassan.executeForm(pardon);
        driss.executeForm(pardon);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "Mohamed (grade 1) handles every kind of form through AForm*" << std::endl;
    try {
        ShrubberyCreationForm  shrub("office");
        RobotomyRequestForm    robot("Amine");
        PresidentialPardonForm pardon("Zineb");
        AForm* forms[3] = { &shrub, &robot, &pardon };
        Bureaucrat mohamed("Mohamed", 1);

        for (int i = 0; i < 3; i++) {
            std::cout << *forms[i] << std::endl;
            mohamed.signForm(*forms[i]);
            mohamed.executeForm(*forms[i]);
        }
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl << "A copy of a signed form stays signed" << std::endl;
    try {
        RobotomyRequestForm original("Salma");
        Bureaucrat mohamed("Mohamed", 1);
        mohamed.signForm(original);
        RobotomyRequestForm copy(original);
        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy:     " << copy << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
