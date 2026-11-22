#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl
            << "----- Create a valid form" << std::endl;
    try {
        Form form("Tax Form", 520, 520);
        // std::cout << form << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // std::cout << std::endl
    //         << "----- Create a form with sign grade 0 (too high)" << std::endl;
    // try {
    //     Form form("Visa Form", 0, 50);
    //     std::cout << form << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << std::endl
    //         << "----- Create a form with execute grade 151 (too low)" << std::endl;
    // try {
    //     Form form("Passport Form", 50, 151);
    //     std::cout << form << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << std::endl
    //         << "----- Mohamed (grade 30) signs a form that needs grade 50" << std::endl;
    // try {
    //     Bureaucrat mohamed("Mohamed", 30);
    //     Form form("Housing Form", 50, 50);
    //     std::cout << form << std::endl;
    //     mohamed.signForm(form);
    //     std::cout << form << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << std::endl
    //         << "----- Said (grade 50) signs a form that needs exactly grade 50" << std::endl;
    // try {
    //     Bureaucrat said("Said", 50);
    //     Form form("Work Permit", 50, 50);
    //     said.signForm(form);
    //     std::cout << form << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << std::endl
    //         << "----- Ahmed (grade 70) tries to sign a form that needs grade 50" << std::endl;
    // try {
    //     Bureaucrat ahmed("Ahmed", 70);
    //     Form form("Business License", 50, 50);
    //     ahmed.signForm(form);
    //     std::cout << form << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << std::endl
    //         << "----- Copy of a signed form stays signed" << std::endl;
    // try {
    //     Bureaucrat laila("Laila", 1);
    //     Form form("ID Card Form", 20, 20);
    //     laila.signForm(form);
    //     Form copy(form);
    //     std::cout << "Original: " << form << std::endl;
    //     std::cout << "Copy:     " << copy << std::endl;
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    return 0;
}
