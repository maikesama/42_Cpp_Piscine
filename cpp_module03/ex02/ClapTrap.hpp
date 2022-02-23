#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string _name);
        ~ClapTrap();
        ClapTrap(ClapTrap const & ct);
        ClapTrap & operator=(ClapTrap const & ct);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int         _hp;
        int         _ep;
        int         _ad;

    private :
        ClapTrap();
};




#endif