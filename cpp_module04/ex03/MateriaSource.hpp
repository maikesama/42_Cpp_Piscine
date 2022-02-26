#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		virtual ~MateriaSource();
		const MateriaSource & operator=(const MateriaSource & ms);
		MateriaSource(const MateriaSource & ms);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	protected :
		AMateria * learned[4];
		int ld;
};
#endif