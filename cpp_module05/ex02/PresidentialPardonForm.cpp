#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	;
}

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & scf)
{
	_target = scf.getName();
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & scf) : Form(scf.getName(), scf.getGTS(), scf.getGTE())
{
	*this = scf;
	return ;
}

void	PresidentialPardonForm::execute(const Bureaucrat & br)
{
	try 
	{
		if (br.getGrade() > getGTE() || getIS() == false)
			throw(GradeToLowException());
		else
		{
			std::cout << _target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
	}
	catch(GradeToLowException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
}