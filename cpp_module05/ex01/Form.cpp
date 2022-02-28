#include "Form.hpp"

Form::Form(std::string name, int gts, int gte) : _name(name), _gts(gts), _gte(gte)
{
	try
	{
		if (_gts < 1 || _gte < 1)
			throw(GradeToHighException());
		else if (_gts > 150 || _gte > 150)
			throw(GradeToLowException());
	}
	catch(GradeToHighException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
	catch(GradeToLowException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
	isSigned = false;
	return ;
}

Form::~Form()
{
	;
}

const Form & Form::operator=(const Form & f)
{
	this->_name = f.getName();
	_gts = f.getGTS();
	_gte = f.getGTE();
	isSigned = f.getIS();

	return *this;
}

Form::Form(const Form & f)
{
	*this = f;
	return ;
}

const int & Form::getGTE() const
{
	return _gte;
}

const int & Form::getGTS() const
{
	return _gts;
}

const bool & Form::getIS() const
{
	return isSigned;
}

const std::string & Form::getName() const
{
	return _name;
}

bool	Form::beSigned(Bureaucrat const & br)
{
	try
	{
		if (br.getGrade() <= _gts)
		{
			isSigned = true;
			return isSigned;
		}
		else
			throw(GradeToLowException());
	}
	catch (GradeToLowException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
}

std::ostream & operator<<(std::ostream & o, const Form & f)
{
	std::string tmp;

	if (f.getIS() == true)
		tmp = "The form is already been signed.";
	else
		tmp = "The form is not signed yet.";

	o << "Form " << f.getName()  << " : " 
	<< "Grade to sign " << f.getGTS() << ", " 
	<< "Grade to execute " << f.getGTE() << "."<< std::endl << tmp;
	
	return o;
}