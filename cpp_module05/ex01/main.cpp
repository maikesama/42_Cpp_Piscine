#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	Frank("Frank", 1);
	Form		BlaBla("Important1", 2, 1);

	Frank.decrementGrade();

	BlaBla.beSigned(Frank);

	Frank.signForm(BlaBla);

	std::cout << Frank << std::endl;
	std::cout << BlaBla << std::endl;
}