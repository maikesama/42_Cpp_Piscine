#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal * meta[50];

	for (int i = 0; i < 50; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}

	for (int i = 0; i < 50; i++)
	{
		delete meta[i];
	}
}
