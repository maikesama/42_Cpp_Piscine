#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		~WrongCat();
		WrongCat & operator=(const WrongCat & cat);
		WrongCat(const WrongCat & cat);

		void	makeSound() const;
};

#endif