#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	ClapTrap::_name = (name + "_clap_name");
	_hp = this->FragTrap::_hp;
	_ad = this->FragTrap::_ad;
	_ep = this->ScavTrap::_ep;
	std::cout << "DiamondTrap " + _name + " has been constructed." << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " + _name + " has been destroyed." << std::endl;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(const DiamondTrap & dt)
{
	_name = dt._name;
	this->ScavTrap::_ep = dt.ScavTrap::_ep;
	this->FragTrap::_hp = dt.FragTrap::_hp;
	this->FragTrap::_ad = dt.FragTrap::_ad;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap & dt) : ClapTrap(dt._name), ScavTrap(dt._name), FragTrap(dt._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;

	*this = dt;

	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, my name is " + _name + " and my grandpa is " + ClapTrap::_name << std::endl;

	return ;
}
