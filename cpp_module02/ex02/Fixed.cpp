#include "Fixed.hpp"

Fixed::Fixed( void ) : _n(0)
{

	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed( Fixed const & f)
{
	*this = f;
	return ;
}

Fixed::Fixed( const int n) : _n(n << _bits)
{
	return ;
}

Fixed::Fixed( const float f) : _n ((roundf(f * (1 << this->_bits))))
{

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
	this->_n = f.getRawBits();

	return	*this;
}

bool	Fixed::operator>(Fixed const & f) const
{
	bool ret;

	this->_n > f.getRawBits() ? (ret = (true)) : (ret = false);
	return ret;
}

bool	Fixed::operator<(Fixed const & f) const
{
	bool ret;

	this->_n < f.getRawBits() ? (ret = true) : (ret = false);
	return ret;
}

bool	Fixed::operator>=(Fixed const & f) const
{
	bool ret;

	this->_n >= f.getRawBits() ? (ret = (true)) : (ret = false);
	return ret;
}

bool	Fixed::operator<=(Fixed const & f) const
{
	bool ret;

	this->_n <= f.getRawBits() ? (ret = (true)) : (ret = false);
	return ret;
}

bool	Fixed::operator==(Fixed const & f) const
{
	bool ret;

	this->_n == f.getRawBits() ? (ret = (true)) : (ret = false);
	return ret;
}

bool	Fixed::operator!=(Fixed const & f) const
{
	bool ret;

	this->_n != f.getRawBits() ? (ret = (true)) : (ret = false);
	return ret;
}

Fixed	Fixed::operator+(Fixed const & f) const
{
	return Fixed((this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & f) const
{
	return Fixed((this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & f) const
{
	return Fixed((this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & f) const
{
	return Fixed((this->toFloat() / f.toFloat()));
}

Fixed&	Fixed::operator++( void )
{
	this->_n++;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp(*this);
	_n++;
	return tmp;
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp(*this);
	_n--;
	return tmp;
}

Fixed&	Fixed::operator--( void )
{
	this->_n--;
	return *this;
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

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return a;
	return b;
}

const int		Fixed::_bits = 8;