#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    private:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:
        ScavTrap();
        ScavTrap(std::string n);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
    
        void attack(const std::string& target);
        void guardGate();

};

#endif
