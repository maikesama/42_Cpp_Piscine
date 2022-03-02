#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cerrno>
#include <cstdio>
#include <iomanip>

class Conversion
{
	public :
		Conversion(std::string	base);
		~Conversion();
		const Conversion & operator=(const Conversion & _);
		Conversion(const Conversion & _);

		const std::string & getBase() const;

		int		whatType() const;
		void	convert();

		void	printChar() const;
		void	printInt() const;
		void	printFloat() const;
		void	printDouble() const;

		bool	impossible() const;

	private :
		std::string _base;
		long int	_n;
		float		_f;
		double		_d;
		char		_c;
};


#endif