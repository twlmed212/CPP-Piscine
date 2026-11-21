#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}


ScalarConverter::~ScalarConverter(){
}
ScalarConverter::ScalarConverter(const ScalarConverter& other){
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    if (this != &other){
    }
    return *this;
}

void ScalarConverter::convert(const std::string& cnvrt){
    (void) cnvrt;
}

char ScalarConverter::getCh(){

}

int ScalarConverter::getNumber(){

}

float ScalarConverter::getFNumber(){

}

double ScalarConverter::getDNumber(){

}
std::ostream& operator<<(std::ostream& out, const ScalarConverter& other){
    return out;
}