#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	typedef	void	(Karen::*fptr)(void);
	public:
	
		Karen( void );
		~Karen( void );
		void	complain( std::string level );
	
	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		fptr	_fp[4];
		std::string _level[4];
};


#endif