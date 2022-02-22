#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

enum complain {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

class Karen 
{
	public:
	
		Karen( void );
		~Karen( void );
		void	complain( int level );
	
	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );


};

#endif