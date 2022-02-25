#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal & an);
		WrongAnimal(const WrongAnimal & an);
		std::string	getType() const;
		void	makeSound() const;

	protected :
		std::string type;
};

#endif