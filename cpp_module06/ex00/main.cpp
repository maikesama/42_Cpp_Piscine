#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	std::string str = static_cast<std::string>(argv[1]);
	Conversion Conv(str);

	Conv.convert();

	return (0);
}