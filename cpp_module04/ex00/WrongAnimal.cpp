#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called." << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & an)
{
	this->type = an.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal & an)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = an;

	return ;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Confused WrongAnimals noise" << std::endl;
}
