#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat	Frank("Frank", 1);
	Form		* BlaBla = new PresidentialPardonForm("Geaof");

	// Frank.decrementGrade();
	BlaBla->beSigned(Frank);
	BlaBla->execute(Frank);
	// BlaBla.beSigned(Frank);

	// Frank.signForm(BlaBla);

	// std::cout << Frank << std::endl;
	std::cout << *BlaBla << std::endl;
}