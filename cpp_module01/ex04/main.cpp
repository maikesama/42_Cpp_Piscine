#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "The Program Need 3 Arguments (File, String You Want To Replace, The Replacement)" << std::endl;
		return (1);
	}

	std::string str;
	str.append(argv[1]);
	str += ".replace";
	std::ifstream 	ifs(argv[1]);
	std::ofstream	ofs(str);
	std::string		line;
	std::string		dontWant = argv[2];
	std::string		replacement = argv[3];

	while(getline(ifs, line))
	{
		int	i = 0;
		while (line[i])
		{
			if (!line.compare(i, dontWant.length(), dontWant))
			{
				line.erase(i, dontWant.length());
				line.insert(i, replacement);
			}
			i++;
		}
		ofs << line << std::endl;
	}
	return (0);
}