#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t ui;

	ui = reinterpret_cast<uintptr_t>(ptr);
	return ui;
}

Data*	deserialize(uintptr_t ui)
{
	Data *ptr = reinterpret_cast<Data*>(ui);
	return (ptr);
}

int	main()
{
	Data 	d;
	Data*	ptr;

	d.ui = 42;
	std::cout << &d << std::endl;
	ptr = deserialize(serialize(&d));
	std::cout << ptr << std::endl;
}