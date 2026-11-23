#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <cfloat>
#include <cmath>

ScalarConverter::ScalarConverter(){

}
ScalarConverter::ScalarConverter(const ScalarConverter& other){
    (void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
    (void)other;
    return *this;
}
ScalarConverter::~ScalarConverter(){}

static bool is_int(const std::string& str)
{
    size_t i = 0;
    if (!str.empty() && (str.at(0) == '-' || str.at(0) == '+'))
        i++;
    if (i == str.length())
        return false;
    for (; i < str.length(); i++)
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    return true;
}

static bool is_char(const std::string& str)
{
    if (str.length() != 1)
        return false;
    bool isPrinatable = std::isprint(static_cast<unsigned char>(str[0]));
    bool isDigit = std::isdigit(static_cast<unsigned char>(str[0]));
    return (isPrinatable && !isDigit);
}

static bool is_double(const std::string& str)
{
    size_t dot = str.find('.');
    if (dot == std::string::npos)
        return false;
    std::string after = str.substr(dot + 1);
    return is_int(str.substr(0, dot)) && is_int(after)
        && std::isdigit(static_cast<unsigned char>(after[0]));
}

static bool is_float(const std::string& str)
{
    return !str.empty() && str[str.length() - 1] == 'f'
        && is_double(str.substr(0, str.length() - 1));
}

static void print_num(double v, const char* suffix)
{
    std::cout << v << (v == std::floor(v) && std::fabs(v) < 1e6 ? ".0" : "")
              << suffix << std::endl;
}

static void print_char(double res)
{
    std::cout << "char: ";
    if (res != res || res < 0 || res > 127)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(res)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(res) << "'" << std::endl;
}

static void print_int(double res)
{
    std::cout << "int: ";
    if (res != res || res > INT_MAX || res < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(res) << std::endl;
}

static void print_float(double res)
{
    std::cout << "float: ";
    if (res > FLT_MAX || res < -FLT_MAX)
        std::cout << "impossible" << std::endl;
    else
        print_num(static_cast<float>(res), "f");
}

static void print_double(double res)
{
    std::cout << "double: ";
    print_num(res, "");
}

static void special_case(const std::string& str)
{
    std::string d = str;
    if (str == "nanf" || str == "+inff" || str == "-inff")
        d = str.substr(0, str.length() - 1);
    std::cout << "char: impossible" << std::endl
              << "int: impossible" << std::endl
              << "float: " << d << "f" << std::endl
              << "double: " << d << std::endl;
}

void ScalarConverter::convert(const std::string& str)
{
    double res;

    if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff"
        || str == "-inf" || str == "-inff")
    {
        special_case(str);
        return ;
    }
    if (is_char(str))
        res = static_cast<double>(str[0]);
    else if (is_int(str) || is_double(str))
        res = std::strtod(str.c_str(), NULL);
    else if (is_float(str))
        res = static_cast<float>(std::strtod(str.c_str(), NULL));
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    print_char(res);
    print_int(res);
    print_float(res);
    print_double(res);
}