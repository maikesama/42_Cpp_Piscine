#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called." << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

Animal & Animal::operator=(const Animal & an)
{
	this->type = an.type;
	return *this;
}

Animal::Animal(const Animal & an)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = an;

	return ;
}

std::string	Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Confused animals noise" << std::endl;
}
