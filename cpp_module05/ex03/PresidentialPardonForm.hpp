#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public :
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	const PresidentialPardonForm & operator=(const PresidentialPardonForm & scf);
	PresidentialPardonForm(const PresidentialPardonForm & scf);

	virtual void	execute(Bureaucrat const & executor);

	const std::string & getTarget() const;

	private :
		std::string _target;
};

#endif