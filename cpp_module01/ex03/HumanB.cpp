#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& Weapon )
{
	_Weapon = &Weapon;
}