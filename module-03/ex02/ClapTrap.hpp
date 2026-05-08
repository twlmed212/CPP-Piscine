#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:
        ClapTrap();
        ClapTrap(std::string n);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
    
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        std::string getName() const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
