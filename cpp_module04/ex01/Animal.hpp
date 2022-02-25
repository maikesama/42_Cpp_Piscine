#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal & operator=(const Animal & an);
		Animal(const Animal & an);
		std::string	getType() const;
		virtual void	makeSound() const;

	protected :
		std::string type;
};

#endif