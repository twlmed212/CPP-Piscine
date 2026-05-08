#include "ScavTrap.hpp"

int main() {
    ScavTrap s("Said");   // should show ClapTrap created THEN ScavTrap created
    s.attack("target");
    s.guardGate();
}                         // should show ScavTrap destroyed THEN ClapTrap destroyed