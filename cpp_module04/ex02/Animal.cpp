#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructor called." << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
	return ;
}

AAnimal & AAnimal::operator=(const AAnimal & an)
{
	this->type = an.type;
	return *this;
}

AAnimal::AAnimal(const AAnimal & an)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = an;

	return ;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

// void	Animal::makeSound() const
// {
// 	std::cout << "Confused animals noise" << std::endl;
// }
