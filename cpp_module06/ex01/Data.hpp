#ifndef DATA_HPP
# define DATA_HPP

#include <cstdint>
#include <iostream>

struct Data
{
	unsigned int	ui;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t ui);


#endif