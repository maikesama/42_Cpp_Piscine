#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& Weapon) : _name(name) , _Weapon(Weapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << this->_Weapon.getType() << std::endl;
}