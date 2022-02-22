#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments. (You Know Karen Love To Complain)" << std::endl;
		return (1);
	}

	Karen Karen;
	std::string	complain;
	complain.append(argv[1]);

	if (complain.compare("DEBUG") == 0)
		Karen.complain(1);
	else if (complain.compare("INFO") == 0)
		Karen.complain(2);
	else if (complain.compare("WARNING") == 0)
		Karen.complain(3);
	else if (complain.compare("ERROR") == 0)
		Karen.complain(4);
	else
		std::cout << "Good job! Now Karen is complaining about your wrong complain. Thank you!" << std::endl;
	
	return (0);
}