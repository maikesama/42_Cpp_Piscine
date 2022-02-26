#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	// the class is abstract so you can not instantiate it
	// (remove the comment to test it)
	// 
	// const AAnimal * meta = new AAnimal();

	const AAnimal * x = new Dog();
	const AAnimal * y = new Cat();

	std::cout << x->getType() << std::endl;
	std::cout << y->getType() << std::endl;

	x->makeSound();
	y->makeSound();

	delete x;
	delete y;


}
