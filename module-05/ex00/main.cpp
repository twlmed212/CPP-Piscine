#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat br("Mohamed", 1);
    
    try {
        br.incrementGrade();
    } catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
