#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string  name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout << _name << " has been constructed." << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " has been destroyed." << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & cp)
{
    _name = cp._name;
    _hp = cp._hp;
    _ep = cp._ep;
    _ad = cp._ad;

    return *this;
}

ClapTrap::ClapTrap(ClapTrap const & cp)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = cp;
    return ;
}

void    ClapTrap::attack(const std::string & target)
{
    if (_ep > 0)
    {
        std::cout << "ClapTRap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
        _ep--;
    }
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0)
    {
        std::cout << "ClapTRap " << _name << " has repareid himself for "<< amount << " HP." << std::endl;
        _ep--;
        _hp += amount;        
    }
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp > 0)
    {
        std::cout << "ClapTRap " << _name << " has take "<< amount << " damage." << std::endl;
        _hp -= amount;
    }
    else
        std::cout << "ClapTrap " + _name + " is already dead." << std::endl;
}
