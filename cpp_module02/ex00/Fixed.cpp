#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
	return ;
}

Fixed&	Fixed::operator=(Fixed const & f)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->_n = f.getRawBits();

	return	*this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void	Fixed::setRawBits( int const raw)
{
	this->_n = raw;

	return ;
}

const int		Fixed::_bits = 8;