#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " + name + "has been constructed" << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " + this->_name + " has been destroyed" << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & cp)
{
    _name = cp._name;
    _hp = cp._hp;
    _ep = cp._ep;
    _ad = cp._ad;

    return *this;
}

ScavTrap::ScavTrap(ScavTrap const & st) : ClapTrap(st._name)
{
    *this = st;
    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " + _name + " is now in Gate keeper mode" << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string & target)
{
    if (_ep > 0 && _hp > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
        _ep--;
    }
    else if (_hp == 0)
        std::cout << "ScavTrap " + _name + " is already dead." << std::endl;
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0 && _hp > 0)
    {
        std::cout << "ScavTrap " << _name << " has repareid himself for "<< amount << " HP." << std::endl;
        _ep--;
        _hp += amount;        
    }
    else if (_hp == 0)
        std::cout << "ScavTrap " + _name + " is already dead." << std::endl;
    else
        std::cout << "Not sufficent energy points." << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (_hp > 0)
    {
        std::cout << "ScavTrap " << _name << " has take "<< amount << " damage." << std::endl;
        _hp -= amount;
    }
    else
        std::cout << "ScavTrap " + _name + " is already dead." << std::endl;
}