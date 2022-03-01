#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		const ShrubberyCreationForm & operator=(const ShrubberyCreationForm & scf);
		ShrubberyCreationForm(const ShrubberyCreationForm & scf);

		virtual void	execute(Bureaucrat const & executor);

		const std::string & getTarget() const;
	private :
		std::string _target;
};

#endif