#include "ScavTrap.hpp"

int main() {
    ScavTrap s("Said");
    s.attack("target");
    s.guardGate();

    // copy constructor chaining
    ScavTrap s2(s);
    s2.attack("target2");

    // no energy left
    ScavTrap s3("Tired");
    for (int i = 0; i < 50; i++)
        s3.attack("target");
    s3.attack("target");

    // no hit points left
    ScavTrap s4("Dying");
    s4.takeDamage(100);
    s4.attack("target");
    s4.beRepaired(10);
}