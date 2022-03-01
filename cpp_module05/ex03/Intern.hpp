#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public :
	Intern();
	~Intern();
	const Intern & operator=(const Intern & in);
	Intern(const Intern & in);

	Form* makeForm(const std::string name, std::string target);

};

#endif