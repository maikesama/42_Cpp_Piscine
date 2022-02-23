#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public :
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap & st);
        ScavTrap & operator=(ScavTrap const & st);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void guardGate();

    private :
        ScavTrap();
};

#endif