#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	return ;
}

Ice::~Ice() 
{
	return ;
}

const Ice & Ice::operator=(const Ice & i)
{
	this->type = i.type;
	return *this;
}

Ice::Ice(const Ice & i) : AMateria("ice")
{
	*this = i;

	return ;
}

AMateria* Ice::clone() const
{
	AMateria *am = new Ice();
	return am;
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
