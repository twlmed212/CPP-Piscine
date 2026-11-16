#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void title(const std::string& text)
{
    std::cout << std::endl << "===== " << text << " =====" << std::endl;
}

int main()
{
    srand(time(NULL));

    /* ---------------- SHRUBBERY (sign 145 / exec 137) ---------------- */
    title("1. Shrubbery: execute before signing");
    try {
        ShrubberyCreationForm shrub("home");
        Bureaucrat gardener("Gardener", 137);
        gardener.executeForm(shrub);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    title("2. Shrubbery: sign + execute with grade 137 (exact edge)");
    try {
        ShrubberyCreationForm shrub("home");
        Bureaucrat gardener("Gardener", 137);
        gardener.signForm(shrub);
        gardener.executeForm(shrub);
        std::cout << "-> check the file home_shrubbery" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    title("3. Shrubbery: signed, but executor grade 138");
    try {
        ShrubberyCreationForm shrub("garden");
        Bureaucrat signer("Signer", 145);
        Bureaucrat intern("Intern", 138);
        signer.signForm(shrub);
        intern.executeForm(shrub);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    /* ---------------- ROBOTOMY (sign 72 / exec 45) ---------------- */
    title("4. Robotomy: sign + execute 5 times (about 50% success)");
    try {
        RobotomyRequestForm robot("Bender");
        Bureaucrat doctor("Doctor", 45);
        doctor.signForm(robot);
        for (int i = 0; i < 5; i++)
            doctor.executeForm(robot);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    /* ---------------- PRESIDENTIAL PARDON (sign 25 / exec 5) ---------------- */
    title("5. Pardon: signer grade 26");
    try {
        PresidentialPardonForm pardon("Arthur");
        Bureaucrat clerk("Clerk", 26);
        clerk.signForm(pardon);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    title("6 & 7. Pardon: grade 25 signs, grade 6 fails, grade 5 executes");
    try {
        PresidentialPardonForm pardon("Arthur");
        Bureaucrat minister("Minister", 25);
        Bureaucrat advisor("Advisor", 6);
        Bureaucrat president("President", 5);
        minister.signForm(pardon);
        advisor.executeForm(pardon);
        president.executeForm(pardon);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    /* ---------------- POLYMORPHISM ---------------- */
    title("8. Polymorphism: one AForm* for every kind of form");
    try {
        ShrubberyCreationForm  shrub("office");
        RobotomyRequestForm    robot("Marvin");
        PresidentialPardonForm pardon("Ford");
        AForm* forms[3] = { &shrub, &robot, &pardon };
        Bureaucrat boss("Boss", 1);

        for (int i = 0; i < 3; i++) {
            std::cout << *forms[i] << std::endl;
            boss.signForm(*forms[i]);
            boss.executeForm(*forms[i]);
        }
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    /* ---------------- OCF of a concrete form ---------------- */
    title("9. Copy constructor keeps the signed status");
    try {
        RobotomyRequestForm original("R2D2");
        Bureaucrat boss("Boss", 1);
        boss.signForm(original);
        RobotomyRequestForm copy(original);
        std::cout << "original: " << original << std::endl;
        std::cout << "copy:     " << copy << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}