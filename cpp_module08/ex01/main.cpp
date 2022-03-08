#include "Span.hpp"

int
main(void) {

	std::cout << "*** TEST SIMPLE ***" << std::endl;
	Span sp = Span(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(17);
		std::cout << "min span: " << sp.shortestSpan() << std::endl;
		std::cout << "max span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "*** TEST COPY ***" << std::endl;
	Span sp2(sp);
	try {
		std::cout << "min span: " << sp2.shortestSpan() << std::endl;
		std::cout << "max span: " << sp2.longestSpan() << std::endl;
		sp.addNumber(42);
	}
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "*** TEST ITERATORS ***" << std::endl;
	Span sp3(3);
	try {
		std::vector<int> v = sp.getVector();
		sp3.addNumber(v.begin(), v.begin() + 3);
		std::cout << "min span: " << sp3.shortestSpan() << std::endl;
		std::cout << "max span: " << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "*** TEST RAND_MILLION ***" << std::endl;
	Span sp4(1000000);
	try {
		std::srand(time(NULL));
		for (int i = 0; i < 1000000; i++)
			sp4.addNumber(std::rand());
		std::cout << "min span: " << sp4.shortestSpan() << std::endl;
		std::cout << "max span: " << sp4.longestSpan() << std::endl;
		sp4.addNumber(42);
	}
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	return EXIT_SUCCESS ;
}