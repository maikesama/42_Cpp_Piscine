#include "FragTrap.hpp"

FragTrap::FragTrap(std::string  name) : ClapTrap(name), _name(name), _hp(100), _ep(100), _ad(30)
{
    std::cout << "FragTrap "+ _name << " has been constructed." << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "+_name << " has been destroyed." << std::endl;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & cp)
{
    _name = cp._name;
    _hp = cp._hp;
    _ep = cp._ep;
    _ad = cp._ad;

    return *this;
}

FragTrap::FragTrap(FragTrap const & cp) : ClapTrap(cp._name)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = cp;
    return ;
}

void    FragTrap::attack(const std::string & target)
{
    if (_ep > 0 && _hp > 0)
    {
        std::cout << "FragTRap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
        _ep--;
    }
    else if (_hp == 0)
        std::cout << "FragTrap " + _name + " is already dead." << std::endl;
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0 && _hp > 0)
    {
        std::cout << "FragTRap " << _name << " has repareid himself for "<< amount << " HP." << std::endl;
        _ep--;
        _hp += amount;        
    }
    else if (_hp == 0)
        std::cout << "FragTrap " + _name + " is already dead." << std::endl;
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    if (_hp > 0)
    {
        std::cout << "FragTRap " << _name << " has take "<< amount << " damage." << std::endl;
        _hp -= amount;
    }
    else
        std::cout << "FragTrap " + _name + " is already dead." << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " + _name + " is High Fiving you!" << std::endl;
    return ;
}
