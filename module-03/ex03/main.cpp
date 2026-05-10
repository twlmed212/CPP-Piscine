#include "DiamondTrap.hpp"

int main() {
    // ScavTrap tests
    DiamondTrap s("Said");
    std::cout << "======================================" << std::endl;
    s.whoAmI();
    std::cout << "======================================" << std::endl;
    s.attack("SED");

    return (0);
}