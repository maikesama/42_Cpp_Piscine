#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat constuctor called." << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destuctor called." << std::endl;
	return ;
}

Cat & Cat::operator=(const Cat & dg)
{
	type = dg.type;
	return *this;
}

Cat::Cat(const Cat & dg) : Animal()
{
	*this = dg;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "Miaõ" << std::endl;
}
