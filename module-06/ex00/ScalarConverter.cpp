#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}


ScalarConverter::~ScalarConverter(){
}
ScalarConverter::ScalarConverter(const ScalarConverter& other){
    (void) other;

}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    if (this != &other){
    }
    return *this;
}

void ScalarConverter::convert(const std::string& literal){
    std::cout << "literal: "<< literal << std::endl;
}
