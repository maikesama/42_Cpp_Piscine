#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public :
		HumanA( std::string name, Weapon& Weapon );
		~HumanA( void );
		void	attack( void );

	private :
		std::string	_name;
		Weapon&	_Weapon;
};

#endif