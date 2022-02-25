#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap & dt);
		DiamondTrap &	operator=(const DiamondTrap & dt);

		void	whoAmI();

	private :
		std::string	_name;
		DiamondTrap();

};

#endif