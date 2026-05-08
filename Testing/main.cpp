#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a(10);   // line 1
    Fixed c;
    c = a;
    std::cout << c << std::endl;
    return 0;
}