#include "iter.hpp"

int main()
{
	std::string str[3] = {"hello", "ciao", "salut"};
	iter(str, 3, print);
	std::cout << std::endl;

	int numbers[3] = {0, 1, 2};
	iter(numbers, 3, print);
	std::cout << std::endl;

	return EXIT_SUCCESS ;
}