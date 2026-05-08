#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap("Guest") {
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n) {
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    std::cout << "Copy constructor called for ScavTrap!" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "Copy assignment operator called!" << std::endl;

    if (this != &other) {
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
        this->_name = other._name;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target){
    if (!_energy_points || !_hit_points){
        std::cout << "Can't attack with current points!\n" << 
                    "Hit Points: "<< _hit_points << "\n" << 
                    "Energy Points: "<< _energy_points << std::endl;
        return ;
    }
    _energy_points -= 1;
    std::cout << "ScavTrap " << this->_name 
            << " attacks " << target << ", causing " << 
            this->_attack_damage << " points of damage!" << std::endl;
}

void  ScavTrap::guardGate() {

}
