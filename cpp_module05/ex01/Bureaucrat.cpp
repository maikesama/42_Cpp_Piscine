#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	;
}

Bureaucrat::~Bureaucrat()
{
	;
}

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat & br)
{
	this->_name = br.getName();
	_grade = br.getGrade();

	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat & br)
{
	*this = br;

	return;
}

int		Bureaucrat::getGrade() const
{
	return _grade;
}

const std::string	Bureaucrat::getName() const
{
	return _name;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & br)
{
	o << br.getName() << ", bureaucrat grade " << br.getGrade();
	return o;
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if ((_grade - 1) > 0)
			_grade -= 1;
		else
			throw(GradeTooHighException());
	}
	catch(GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if ((_grade + 1) <= 150)
			_grade += 1;
		else
			throw(GradeTooLowException());
	}
	catch(GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
}

void	Bureaucrat::signForm(const Form & f)
{
	if (f.getIS() == true && _grade <= f.getGTS())
		std::cout << "Bureaucrat " + _name + " signed form " + f.getName() << std::endl;
	else
		std::cout << "Bureaucrat " + _name + " couldn't sign form " + f.getName() + "cause his grade is too low" << std::endl;
		
}
