#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl 
            << "----- Valid form" << std::endl;
    try {
        Form form("Form1", 50, 50);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl 
        << "----- Form with gradeToSign = 0" << std::endl;
    try {
        Form form("Form2", 0, 50);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl 
         << "----- Form with gradeToExecute = 151" << std::endl;
    try {
        Form form("Form3", 50, 151);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl 
         << "-------------------------" << std::endl;
    try {
        Bureaucrat bureaucrat("Mohamed", 30);
        Form form("Form4", 50, 50);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl 
         << "-------------------------" << std::endl;
    try {
        Bureaucrat bureaucrat("Said", 50);
        Form form("Form5", 50, 50);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl 
         << "-------------------------" << std::endl;
    try {
        Bureaucrat bureaucrat("Ahmed", 70);
        Form form("Form6", 50, 50);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl 
         << "-------------------------" << std::endl;
    try {
        Bureaucrat bureaucrat("Laila", 30);
        Form form("Form7", 50, 50);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}