# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Guest_clap_name"), FragTrap("Guest"), ScavTrap("Guest") {
    std::cout << "DiamondTrap " << _name << " has been created!" << std::endl;
    _name = "Guest";
    _attack_damage = FragTrap::_attack_damage;
    _energy_points = ScavTrap::_energy_points;
    _hit_points = FragTrap::_hit_points;
    _attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), FragTrap(n), ScavTrap(n), _name(n) {
    std::cout << "DiamondTrap " << _name << " has been created!" << std::endl;
    _attack_damage = FragTrap::_attack_damage;
    _energy_points = ScavTrap::_energy_points;
    _hit_points = FragTrap::_hit_points;
    _attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other),  FragTrap(other), ScavTrap(other) {
    std::cout << "Copy constructor called for DiamondTrap!" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "Copy assignment operator called for DiamondTrap!" << std::endl;

    if (this != &other) {
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
        this->_name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}