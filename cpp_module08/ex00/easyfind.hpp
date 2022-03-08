#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T const cont, int value)
{
	typename T::const_iterator it;
	
	it = std::find(cont.begin(), cont.end(), value);

	if (it == cont.end())
	{
		std::cout << "Element not found" <<std::endl;
		return 1;
	}
	std::cout << "Element found in container" << std::endl;
	return 0;
	
}


#endif