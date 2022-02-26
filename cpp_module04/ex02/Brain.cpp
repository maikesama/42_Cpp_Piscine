#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=(const Brain & br)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = br.ideas[i];
	return *this;
}

Brain::Brain(Brain const & br)
{
	*this = br;
	return ;
}