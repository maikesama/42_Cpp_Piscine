#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Frank("Frank", 1);

	Frank.decrementGrade();

	std::cout << Frank;
}