#include "DiamondTrap.hpp"

int main() {
    DiamondTrap d("Said");
    std::cout << "+++++=====+++===++==\n";
    d.whoAmI();
    std::cout << "+++++=====+++===++==\n";
    d.attack("target");
    std::cout << "+++++=====+++===++==\n";
    d.guardGate();
    std::cout << "+++++=====+++===++==\n";
    d.highFivesGuys();
    std::cout << "+++++=====+++===++==\n";
    d.takeDamage(50);
    std::cout << "+++++=====+++===++==\n";
    d.beRepaired(25);
    std::cout << "+++++=====+++===++==\n";
    std::cout << "+++++=====+++===++==\n";
    DiamondTrap d2(d);
    std::cout << "+++++=====+++===++==\n";
    d2.whoAmI();
}