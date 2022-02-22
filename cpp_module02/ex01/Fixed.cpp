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

Fixed::Fixed( const int n) : _n(n << _bits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float f) : _n ((roundf(f * (1 << this->_bits))))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

int		Fixed::toInt( void ) const
{
	return this->_n >> _bits;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_n / (float)(1 << this->_bits)) ;
}

Fixed&	Fixed::operator=(Fixed const & f)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->_n = f.getRawBits();

	return	*this;
}

int		Fixed::getRawBits( void ) const
{
	return this->_n;
}

void	Fixed::setRawBits( int const raw)
{
	this->_n = raw;

	return ;
}

std::ostream& operator<<(std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return o ;
}

const int		Fixed::_bits = 8;