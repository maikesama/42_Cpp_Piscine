#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
     public :
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap & st);
        FragTrap & operator=(FragTrap const & st);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void highFivesGuys();

    protected:
        std::string _name;
        int         _hp;
        int         _ep;
        int         _ad;

    private :
        FragTrap();

};

#endif