#include "ScalarConverter.hpp"
#include <cctype>

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

static bool isInt(const std::string& value) {
    if (value.empty())
        return false;

    std::size_t i = 0;
    if (value[0] == '+' || value[0] == '-')
        i++;

    if (i == value.length())
        return false;

    for (; i < value.length(); ++i) {
        if (!std::isdigit(static_cast<unsigned char>(value[i])))
            return false;
    }

    return true;
}

static bool isChar(const std::string& value){
    if (value.empty() || isInt(value))
        return false;
    if (value.length() == 1 && std::isprint(static_cast<unsigned char>(value.at(0)))){
        return true;
    }
    return false;
}

static bool isDouble(const std::string& value) {
    if (value.empty())
        return false;

    unsigned long i = 0;
    bool dot = false;
    bool digitBefore = false;
    bool digitAfter = false;

    if (value[i] == '+' || value[i] == '-') {
        i++;
    }

    for (; i < value.length(); i++) {
        unsigned char c = static_cast<unsigned char>(value[i]);

        if (std::isdigit(c) && !dot) {
            digitBefore = true;
        }
        else if (std::isdigit(c) && dot) {
            digitAfter = true;
        }
        else if (c == '.' && !dot) {
            dot = true;
        }
        else {
            return false;
        }
    }
    return dot && digitAfter && digitBefore;
}

void ScalarConverter::convert(const std::string& literal){
    (void) isChar;
    if (isDouble(literal))
        std::cout << "Int: 1" << std::endl;
    else
        std::cout << "Int: 0" << std::endl;

}
