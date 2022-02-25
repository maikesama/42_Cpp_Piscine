#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon(Weapon& Weapon);

	private :
		std::string		_name;
		Weapon*	_Weapon;
		

};

#endif