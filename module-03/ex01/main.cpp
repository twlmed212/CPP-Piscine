#include "ClapTrap.hpp"

int main() {
    ClapTrap med = ClapTrap("Mohamed");
    med.attack("Said");
    med.takeDamage(2);
    med.beRepaired(2);
    return (0);
}