#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public :
		Cat();
		~Cat();
		Cat & operator=(const Cat & cat);
		Cat(const Cat & cat);

		virtual void	makeSound() const;

	private :
		Brain *brain;
};

#endif