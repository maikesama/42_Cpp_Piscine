#include <iostream>

int main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	char	c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argv[i])
	{
		while (argv[i][j])
		{
			c = toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return (0);
}