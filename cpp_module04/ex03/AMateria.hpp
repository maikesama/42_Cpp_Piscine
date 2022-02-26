#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "Character.hpp"
#include <iostream>

class AMateria
{
	protected:
		std::string type;

	public :
	AMateria(std::string const & type);
	virtual ~AMateria() {};
	AMateria & operator=(const AMateria & am);
	AMateria(const AMateria & am);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif