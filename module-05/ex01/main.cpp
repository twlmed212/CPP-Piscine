#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form tax("TaxForm", 50, 20);

    Bureaucrat mohamed("Mohamed", 100);
    Bureaucrat said("Said", 50);

    mohamed.signForm(tax);
    std::cout << tax << std::endl;
    said.signForm(tax);
    said.signForm(tax);
    std::cout << tax << std::endl;

    return 0;
}