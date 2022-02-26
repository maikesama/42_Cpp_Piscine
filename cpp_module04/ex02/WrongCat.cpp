#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constuctor called." << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destuctor called." << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(const WrongCat & dg)
{
	type = dg.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat & dg) : WrongAnimal()
{
	*this = dg;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaõ" << std::endl;
}
