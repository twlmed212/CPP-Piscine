#include <iostream>
#include "num.hpp"


int main() {
    num a(10);
    num c(20);
    ++a;            // error: no match for 'operator++'
    c + a;          // error: passing 'const num' as 'this' discards qualifiers
    -a;             // error: no match for 'operator-'
    std::cout << +a << std::endl;
    std::cout << -a << std::endl;
    std::cout << c + a; // error: no match for 'operator<<'
    const num k(3);
    std::cout << -k;   // error: passing 'const num' as 'this' argument discards qualifiers
    return 0;
}