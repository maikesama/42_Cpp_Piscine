#include "Character.hpp"

Character::Character(std::string const & name) : used(0), unused(0) {

	this->name = name;
	return ;
}

Character::~Character() 
{
	//delete [] *inventory;
	//delete [] *left;
	
	return ;
}

const Character & Character::operator=(const Character & ch)
{
	name = ch.name;

	delete [] *inventory;
	for (int i = 0; i < 4; i++)
	{
		if (i < ch.used)
			inventory[i] = ch.inventory[i];
		else
			inventory[i] = NULL;
	}
	
	return *this;
}

Character::Character(const Character & ch)
{
	*this = ch;
	return ;
}

void	Character::equip(AMateria *m)
{
	if (used < 4)
	{
		inventory[used] = m;
		used++;
	}
}

std::string const & Character::getName() const
{
	return this->name;
}

void	Character::unequip(int indx)
{
	if (indx < used && indx < 4)
	{
		left[unused++] = inventory[indx];
		for (int i = indx; i < 4; i++)
			inventory[i] = inventory[i + 1];
		inventory[3] = NULL;
		used--;
	}
}

void	Character::use(int indx, ICharacter& target)
{
	if (indx < used && indx < 4)
		inventory[indx]->use(target);
}