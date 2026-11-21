#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
class ScalarConverter {
private:
    char ch;
    int number;
    float fNumber;
    double dNumber;
public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);

    static void convert(const std::string& cnvrt);     
    char getCh();
    int getNumber();
    float getFNumber();
    double getDNumber();
};

std::ostream& operator<<(std::ostream& out, const ScalarConverter& other);
#endif