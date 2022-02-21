#include "Karen.hpp"

Karen::Karen( void )
{
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";

	Karen::_fp[0] = &Karen::debug;
	Karen::_fp[1] = &Karen::info;
	Karen::_fp[2] = &Karen::warning;
	Karen::_fp[3] = &Karen::error;
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void	Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(_level[i]))
		{
			(this->*_fp[i])();
		}
	}
}