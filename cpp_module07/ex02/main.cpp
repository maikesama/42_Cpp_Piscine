
#include "Array.hpp"

#include <cstdlib>
#include <iostream>

int
main(void) {

	Array<int>	a(2);

	a[0] = 42;
	a[1] = 21;

	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a.size() << std::endl;

	Array<int>	b(a);
	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << b.size() << std::endl;

	return EXIT_SUCCESS ;
}
