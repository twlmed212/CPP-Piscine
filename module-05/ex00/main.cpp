#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl 
            << "-----" 
            << " Constructor with 0 grade" << std::endl;

    try
    {
        Bureaucrat b1("Ahmed", 0);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl 
            << "-----"
            <<" Constructor with 151 grade" << std::endl;

    try
    {
        Bureaucrat b1("Salim", 151);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl <<
            "--------- First Bureaucrat ---------" 
            << std::endl
            << std::endl; 

    try
    {
        Bureaucrat b1("Mohamed", 2);
        std::cout << b1 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;

        b1.incrementGrade();
        std::cout << b1 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl <<
             "--------- Second Bureaucrat ---------" 
             << std::endl
             << std::endl; 

    try
    {
        Bureaucrat b2("Said", 149);
        std::cout << b2 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;
    
        b2.decrementGrade();
        std::cout << b2 << std::endl;

    }        
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }    


    std::cout << std::endl <<
             "--------- Copy Constructor ---------" 
             << std::endl
             << std::endl; 

    try
    {
        Bureaucrat b1("Sarah", 50);
        std::cout << b1 << std::endl;

        Bureaucrat b2(b1);
        std::cout << b2 << std::endl;
        
    }        
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }    

    std::cout << std::endl <<
             "--------- Assignment operator ---------" 
             << std::endl
             << std::endl; 

    try
    {
        Bureaucrat b1("Anisa", 50);
        std::cout << b1 << std::endl;

        Bureaucrat b2("Imane", 1);
        std::cout << "Before " << std::endl << b2 << std::endl;
        b2 = b1;
        std::cout << "After " << std::endl << b2 << std::endl;
        
    }        
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }    

    std::cout << std::endl <<
             "--------- Default Constructor ---------" 
             << std::endl
             << std::endl; 

    try
    {
        Bureaucrat b1;
        std::cout << b1 << std::endl;
        
    }        
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }    

    return 0;
}