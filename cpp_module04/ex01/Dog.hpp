#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog & operator=(const Dog & dg);
		Dog(const Dog & dg);

		virtual void makeSound() const;

	private :
		Brain *brain;
};

#endif