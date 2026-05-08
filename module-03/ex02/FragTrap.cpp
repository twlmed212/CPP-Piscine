#include "FragTrap.hpp"

ClapTrap::ClapTrap() : _name("Guest"), _hit_points(10), 
                        _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : _name(n), _hit_points(10), 
                        _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
        std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Copy constructor called for ClapTrap!" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "Copy assignment operator called!" << std::endl;

    if (this != &other) {
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
        this->_name = other._name;
    }
    return *this;
}
