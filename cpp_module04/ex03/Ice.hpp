#ifndef ICE_CPP
# define ICE_CPP

#include "AMateria.hpp"
#include "Character.hpp"

class	Ice : public AMateria
{
	public :
		Ice();
		virtual ~Ice();
		const Ice & operator=(const Ice & i);
		Ice(const Ice & i);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif