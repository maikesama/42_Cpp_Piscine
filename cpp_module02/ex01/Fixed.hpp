#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public :
		Fixed( void );
		Fixed( Fixed const & f );
		~Fixed( void );

		Fixed( const int n );
		Fixed( const float f );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed& operator=(Fixed const & f );


	private :
		int					_n;
		static const int	_bits;
	
};

std::ostream & operator<<(std::ostream & o, Fixed const & fx);

#endif