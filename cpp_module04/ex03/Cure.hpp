#ifndef CURE_CPP
# define CURE_CPP

#include "AMateria.hpp"
#include "Character.hpp"

class	Cure : public AMateria
{
	public :
		Cure();
		virtual ~Cure();
		const Cure & operator=(const Cure & i);
		Cure(const Cure & i);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif