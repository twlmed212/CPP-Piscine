# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Guest") {
    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n) {
    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "Copy constructor called for FragTrap!" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "Copy assignment operator called for FragTrap!" << std::endl;

    if (this != &other) {
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
        this->_name = other._name;
    }
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (!_energy_points || !_hit_points) {
        std::cout << "FragTrap " << _name 
                  << " can't attack, no points left!" << std::endl;
        return;
    }
    _energy_points -= 1;
    std::cout << "FragTrap " << _name 
              << " attacks " << target << ", causing " 
              << _attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High Five Guys" << std::endl;
}
