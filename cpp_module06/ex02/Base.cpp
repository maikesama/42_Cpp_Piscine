
#include "Base.hpp"

Base * generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
				return new A();
				break;
		case 1:
				return new B();
				break;
		case 2:
				return new C();
				break;
		default:
				return NULL;
				break;

	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "identifier & : A" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "identifier & : B" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "identifier & : C" << std::endl;
	}
	catch(const std::bad_cast& e) {}
}


