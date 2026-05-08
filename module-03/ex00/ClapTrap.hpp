#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int _hit_points;//10
        int _energy_points;//10
        int _attack_damage;//0

    public:
        ClapTrap();
        ClapTrap(std::string n);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
    
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        
        void setName(std::string& name);
        std::string getName() const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
