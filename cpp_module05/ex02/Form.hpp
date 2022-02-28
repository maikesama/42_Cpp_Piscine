#ifndef FORM_HPP
# define FORM_HPP

class	Bureaucrat;
#include <iostream>
#include "Bureaucrat.hpp"

class	Form
{
	public :
		Form(std::string name, int gts, int gte);
		virtual ~Form();
		const Form & operator=(const Form & f);
		Form(const Form & f);

		const int&	getGTE() const;
		const int&	getGTS() const;
		const std::string& getName() const;
		const bool&	getIS() const;

		bool	beSigned(Bureaucrat const & br);

		virtual void	execute(Bureaucrat const & executor) = 0;

		class GradeToLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "The Grade Is Too Low.";
				}
		};

		class GradeToHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "The Grade Is Too High.";
				}
		};

	private :
		/*const*/ std::string _name;
		/*const*/	int	_gts;
		/*const*/	int _gte;
		bool		isSigned;
};

std::ostream & operator<<(std::ostream & o, const Form & f);


#endif