#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Alice", 2);

        std::cout << b1 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}