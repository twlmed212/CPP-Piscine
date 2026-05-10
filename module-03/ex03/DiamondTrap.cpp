# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Guest_clap_name"), ScavTrap("Guest"), FragTrap("Guest") {
    std::cout << "DiamondTrap " << _name << " has been created!" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    _name = "Guest";
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n), FragTrap(n), _name(n) {
    std::cout << "DiamondTrap " << _name << " has been created!" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
    
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
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