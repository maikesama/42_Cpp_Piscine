#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public :
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	const RobotomyRequestForm & operator=(const RobotomyRequestForm & scf);
	RobotomyRequestForm(const RobotomyRequestForm & scf);

	virtual void	execute(Bureaucrat const & executor);

	private :
		std::string _target;
		static int	r;
};

#endif