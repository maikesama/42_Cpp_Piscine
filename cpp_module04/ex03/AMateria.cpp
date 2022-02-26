#include "AMateria.hpp"

AMateria::AMateria(const std::string & type) : type(type)
{
	return ;
}

AMateria & AMateria::operator=(const AMateria & am)
{
	this->type = am.type;
	return *this;
}

AMateria::AMateria(const AMateria & am)
{
	*this = am;
	return ;
}

std::string const & AMateria::getType() const
{
	return this->type;
}