#include "ClapTrap.hpp"

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
    std::cout << "Copy assignment operator called for ClapTrap!" << std::endl;

    if (this != &other) {
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
        this->_name = other._name;
    }
    return *this;
}

int ClapTrap::getHitPoints() const {
    return (_hit_points);
}
int ClapTrap::getEnergyPoints() const {
    return (_energy_points);
}
int ClapTrap::getAttackDamage() const {
    return (_attack_damage);
}
std::string  ClapTrap::getName() const {
    return (this->_name);
}

void ClapTrap::attack(const std::string& target) {
    if (!_energy_points || !_hit_points){
        std::cout << "Can't attack with current points!\n" << 
                    "Hit Points: "<< _hit_points << "\n" << 
                    "Energy Points: "<< _energy_points << std::endl;
        return ;
    }
    _energy_points -= 1;
    std::cout << "ClapTrap " << this->_name 
            << " attacks " << target << ", causing " << 
            this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= (unsigned int)_hit_points)
        _hit_points = 0;
    else
        _hit_points -= amount;
    std::cout << "ClapTrap " << _name 
              << " takes " << amount 
              << " points of damage! HP left: " 
              << _hit_points << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount) {
    if (!_hit_points || !_energy_points)
        return;
    _energy_points -= 1;
    _hit_points += amount;
    std::cout << "ClapTrap " << _name 
            << " Repaired with " << amount 
            << " points of repaird! HP : " 
            << _hit_points << std::endl;
}