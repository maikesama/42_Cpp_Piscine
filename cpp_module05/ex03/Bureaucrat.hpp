#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class	Form;
#include <iostream>
#include "Form.hpp"

class	Bureaucrat
{
	public :
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		const Bureaucrat & operator=(const Bureaucrat & br);
		Bureaucrat(const Bureaucrat & br);

		int					getGrade() const;
		const std::string	getName() const;

		void	incrementGrade();
		void	decrementGrade();

		void	signForm(const Form & f);

		void	executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("The Grade Is Too High.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("The Grade Is Too Low.");
				}
		};


	private :
		std::string	_name;
		int					_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & br);

#endif