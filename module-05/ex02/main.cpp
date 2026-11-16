#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "Creating a Bureaucrat with grade 1" << std::endl;
    Bureaucrat b1("John", 1);
    std::cout << b1 << std::endl;
    AForm* form1 = new ShrubberyCreationForm("Home");
    std::cout << *form1 << std::endl;
    std::cout << "Signing the form" << std::endl;
    form1->beSigned(b1);
    std::cout << *form1 << std::endl;
    std::cout << "Executing the form" << std::endl;
    form1->execute(b1);

    return 0;
}