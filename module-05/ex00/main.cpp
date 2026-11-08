#include <vector>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

void checkAge(int age) {
    if (age < 18) {
        // C++98 allows throwing primitive types or standard
        // library exceptions
        throw std::runtime_error("Age must be 18 or older."); 
    }
}

int divide(int a, int b){
    if (b == 0)
        throw std::runtime_error("Error trying to Divide by zero");
    return (a/b);
}
int main() {
    // Bureaucrat br;
    // std::string nmbrs = "Amazing :D";
    
    try {
        std::cout << divide(10, 0) << std::endl;
    } catch(std::exception& e){
        std::cout << "Error caought when trying to call divide function"<<
                    std::endl << e.what() << std::endl;
    }
    // Best Practice: Always catch objects by reference to avoid
    //object slicing
    // catch (const std::runtime_error& e) {
    //     std::cerr << "Caught runtime error: " << e.what() << std::endl;
    // }
    // // Catch-all block must come last
    // catch (const std::out_of_range& e) {
    //     std::cerr << "Caught runtime error: " << e.what() << std::endl;
    // }
    // catch (...) {
    //     std::cerr << "Caught an unknown exception." << std::endl;
    // }
    return 0;
}
