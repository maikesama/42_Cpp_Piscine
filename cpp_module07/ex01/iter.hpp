#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename A>
void	print(A arr)
{
	std::cout << arr << std::endl;
};

template <typename A>
void	iter(A *arr, int size, void (*func)(A))
{
	for (int i = 0; i < size; i++)
	{
		(*func)(arr[i]);
	}
};

#endif