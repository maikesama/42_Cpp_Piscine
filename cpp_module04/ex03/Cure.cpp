#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::~Cure()
{
	return ;
}

const Cure & Cure::operator=(const Cure & i)
{
	this->type = i.type;
	return *this;
}

Cure::Cure(const Cure & i) : AMateria("cure")
{
	*this = i;

	return ;
}

AMateria* Cure::clone() const
{
	AMateria *am = new Cure();
	return am;
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
