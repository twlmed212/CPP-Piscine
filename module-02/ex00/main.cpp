#include "ocf.hpp"

int main() {
    std::cout << "-----------------a-----------------" << std::endl;
    Car a = Car();
    a.x = 30;
    a.y = new int[1];
    a.y[0] = 230;
    std::cout << a.x
        << std::endl
        << a.y[0]
        << std::endl;
    std::cout << "-----------------b-----------------" << std::endl;

    Car b = Car();
    b = a;

    std::cout << b.x
        << std::endl
        << b.y[0]
        << std::endl;
    return (0);
}