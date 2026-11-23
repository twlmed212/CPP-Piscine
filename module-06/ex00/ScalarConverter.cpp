#include "ScalarConverter.hpp"
#include <cctype>
#include <iomanip>
#include <climits>

enum e_type { CHAR, INT, FLOAT, DOUBLE, PSEUDO_FLOAT, PSEUDO_DOUBLE, INVALID };


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

static bool isFloat(const std::string& value) {
    if (value.empty() || value[value.length() - 1] != 'f')
        return false;

    std::string str = value.substr(0, value.length() - 1);

    return isDouble(str);
}

static bool isPseudoFloat(const std::string& s) {
    return s == "nanf" || s == "-inff" || s == "inff" || s == "+inff";
}

static bool isPseudoDouble(const std::string& s) {
    return s == "nan" || s == "-inf" || s == "inf" || s == "+inf";
}

static e_type detectType(const std::string& s) {
    if (isPseudoFloat(s))
        return PSEUDO_FLOAT;
    if (isPseudoDouble(s))
        return PSEUDO_DOUBLE;
    if (isInt(s))
        return INT;
    if (isChar(s))
        return CHAR;
    if (isDouble(s))
        return DOUBLE;
    if (isFloat(s))
        return FLOAT;
    return INVALID;
}

static void printChar(double d){
    std::cout << "char: ";
    if (d != d || d < 0 || d > 127)
        std::cout << "impossible";
    else if (!std::isprint(static_cast<int>(d)))
        std::cout << "Non displayable";
    else
        std::cout << "'" << static_cast<char>(d) << "'";
    std::cout << std::endl;
}

static void printInt(double d) {
    std::cout << "int: ";
    if (d != d || d < INT_MIN || d > INT_MAX)
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(d);
    std::cout << std::endl;
}

void ScalarConverter::convert(const std::string& literal){
    switch (detectType(literal))
    {
    case CHAR: {
        char   c = literal[0];
        int    i = static_cast<int>(c);
        float  f = static_cast<float>(c);
        double d = static_cast<double>(c);

        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f  << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
        break;
    }
    case INT:
        std::cout << "Type is int" << std::endl;
        break;
    case FLOAT: {
        float  f = static_cast<float>(literal);
        int    i = static_cast<int>(c);
        double d = static_cast<double>(c);
        char   c = literal[0];

        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f  << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
        break;
    }
    case DOUBLE:
        std::cout << "Type is double" << std::endl;
        break;
    case PSEUDO_DOUBLE:
        std::cout << "Type is pseudo double" << std::endl;
        break;
    case PSEUDO_FLOAT:
        std::cout << "Type is pseudo float" << std::endl;
        break;
    case INVALID:
        std::cout << "Type is invalid" << std::endl;
        break;
    default:
        std::cout << "Type is nothing" << std::endl;

        break;
    }
}
