#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string  name) : _name(name), _hp(100), _ep(50), _ad(20)
{
    std::cout << "ClapTrap "+ _name << " has been constructed." << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "+_name << " has been destroyed." << std::endl;
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
    if (_ep > 0 && _hp > 0)
    {
        std::cout << "ClapTRap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
        _ep--;
    }
    else if (_hp == 0)
        std::cout << "ClapTrap " + _name + " is already dead." << std::endl;
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0 && _hp > 0)
    {
        std::cout << "ClapTRap " << _name << " has repareid himself for "<< amount << " HP." << std::endl;
        _ep--;
        _hp += amount;        
    }
    else if (_hp == 0)
        std::cout << "ClapTrap " + _name + " is already dead." << std::endl;
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
