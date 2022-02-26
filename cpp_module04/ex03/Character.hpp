#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	public :
		Character(std::string const & name);
		virtual ~Character();
		const Character & operator=(const Character & ch);
		Character(const Character & ch);
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	protected :
		std::string	name;
		AMateria* inventory[4];
		int used;
		int	unused;
		AMateria* left[1000];
};

#endif