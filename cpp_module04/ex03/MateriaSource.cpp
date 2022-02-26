#include "MateriaSource.hpp"

#include <string>

MateriaSource::MateriaSource() : ld(0)
{
	return ;
}

MateriaSource::~MateriaSource()
{
	return ;
}

MateriaSource::MateriaSource(const MateriaSource & ms)
{
	*this = ms;
	return ;
}

const MateriaSource & MateriaSource::operator=(const MateriaSource & ms)
{
	delete [] *learned;

	ld = ms.ld;
	for (int i = 0; i < 4; i++)
	{
		if (i < ms.ld)
			learned[i] = ms.learned[i];
		else
			learned[i] = NULL;
	}

	return *this;
}

void	MateriaSource::learnMateria(AMateria * m)
{
	if (ld < 4)
	{
		learned[ld] = m;
		ld++;
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && i <= ld; i++)
	{
		if (!type.compare(learned[i]->getType()))
			return (new AMateria(type));
	}
	return 0;
}