#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T cont, int value)
{
	int	it;

	for (it = 0; cont[it]; it++)
	{
		if (cont[it] == value)
		{
			std::cout << "Element found in container" << std::endl;
			return 0;
		}
	}
	std::cout << "Element not found" <<std::endl;
	return 1;
}


#endif