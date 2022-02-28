#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	;
}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & scf)
{
	_target = scf.getName();
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & scf) : Form(scf.getName(), scf.getGTS(), scf.getGTE())
{
	*this = scf;
	return ;
}

void	RobotomyRequestForm::execute(const Bureaucrat & br)
{
	try 
	{
		if (br.getGrade() > getGTE() || getIS() == false)
			throw(GradeToLowException());
		else
		{
			r++;
			std::cout << "* DRILLING NOISES *" << std::endl;
			if (r % 2 == 0)
				std::cout<< _target + " has been robotomized!" << std::endl;
			else
				std::cout<< "the robotomization on " + _target + " wasn't succeful, I'm sorry." << std::endl;

		}
	}
	catch(GradeToLowException e)
	{
		std::cout << e.what() << std::endl;
		std::exit(1);
	}
}

int		RobotomyRequestForm::r = 0;