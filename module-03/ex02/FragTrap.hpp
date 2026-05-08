#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>

class FragTrap {
    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;

    public:
        FragTrap();
        FragTrap(std::string n);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();
    
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        std::string getName() const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
