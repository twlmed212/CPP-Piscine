#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // ScavTrap tests
    ScavTrap s("Said");
    s.attack("Mohamed");
    s.guardGate();

    std::cout << "=======================\n" << std::endl;
    // FragTrap tests
    FragTrap f("Frag");
    f.attack("Mohamed");
    f.highFivesGuys();
    
    std::cout << "=======================\n" << std::endl;
    // Copy constructor test
    FragTrap f2(f);
    f2.attack("Mostapha");
    return (0);
}