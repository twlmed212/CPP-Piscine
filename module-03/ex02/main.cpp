#include "ScavTrap.hpp"

int main() {
    ScavTrap s("Said");
    s.attack("target");
    s.guardGate();

    // // Test 2: copy constructor chaining
    // ScavTrap s2(s);
    // s2.attack("target2");

    // // Test 3: no energy left
    // ScavTrap s3("Tired");
    // for (int i = 0; i < 50; i++)
    //     s3.attack("target");
    // s3.attack("target"); // should fail - no energy

    // // Test 4: no hit points left
    // ScavTrap s4("Dying");
    // s4.takeDamage(100);
    // s4.attack("target"); // should fail - no HP
    // s4.beRepaired(10);   // should fail - no HP
}