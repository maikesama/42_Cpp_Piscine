#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public :
		Fixed( void );
		Fixed( Fixed const & f );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed& operator=(Fixed const & f );


	private :
		int					_n;
		static const int	_bits;
	
};

#endif