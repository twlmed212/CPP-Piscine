#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string n);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap();
    
        void whoAmI(void);
        void attack(const std::string& target);
};

#endif