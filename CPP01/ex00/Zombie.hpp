#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		//std::string	getName( Zombie *Zombie ) const;

	private :

		std::string	_name;
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif