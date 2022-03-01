#include "Intern.hpp"
#include <string>

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

const Intern & Intern::operator=(const Intern & in)
{
	return in;
}

Intern::Intern(const Intern & in)
{
	*this = in;
	return ;
}

Form* Intern::makeForm(const std::string name, std::string target)
{
	Form* type;
	std::string s1 = "robotomy request";
	std::string s2 = "shrubbery creation";
	std::string s3 = "presidential pardon";

	for (;!name.compare(s1);)
	{
		type = new RobotomyRequestForm(target);
		std::cout << "Intern creates " + type->getName() << std::endl;
		return type;
	}
	for (;!name.compare(s2);)
	{
		type = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " + type->getName() << std::endl;
		return type;
	}
	for (;!name.compare(s3);)
	{
		type = new PresidentialPardonForm(target);
		std::cout << "Intern creates " + type->getName() << std::endl;
		return type;
	}
	std::cout << "The form you're trying to make does not exist." << std::endl;
	return (0);
}