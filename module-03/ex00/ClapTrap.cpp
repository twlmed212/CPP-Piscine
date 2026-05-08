#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Guest"){
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(std::string n) : _name(n) {
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::~ClapTrap() {
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_hit_points = other.getHitPoints();
        this->_energy_points = other.getEnergyPoints();
        this->_attack_damage = other.getAttackDamage();
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
void ClapTrap::setName(std::string& name) {
    _name = name;
}
std::string  ClapTrap::getName() const {
    return (this->_name);
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << this->_name 
            << " attacks " << target << ", causing " << 
            this->_attack_damage << " points of damage!";
}

void ClapTrap::takeDamage(unsigned int amount) {

}
void ClapTrap::beRepaired(unsigned int amount) {
    
}