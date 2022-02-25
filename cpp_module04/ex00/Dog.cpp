#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog constuctor called." << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called." << std::endl;
	return ;
}

Dog & Dog::operator=(const Dog & dg)
{
	type = dg.type;
	return *this;
}

Dog::Dog(const Dog & dg) : Animal()
{
	*this = dg;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}
