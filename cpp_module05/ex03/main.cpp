#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	Frank("Frank", 1);
    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

	rrf->beSigned(Frank);
	rrf->execute(Frank);

	delete rrf;
}