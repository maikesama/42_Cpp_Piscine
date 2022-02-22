#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main()
{
	PhoneBook   PhoneBook;
	Contact     Contact;
	std::string        input;

	while (1)
	{
		std::cout << "What can I do for you?" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (input.size() == 0)
		{
			std::cout << "Error : Wrong Input. (Possible Commands : ADD, SEARCH, EXIT)" << std::endl;
			std::cout << std::endl;
		}
		else if (input.compare("ADD") == 0)
			PhoneBook.AddContact();
		else if (input.compare("SEARCH") == 0)
			PhoneBook.SearchContact();
		else if (input.compare("EXIT") == 0)
			break ;
		else
		{
			std::cout << "Error : Wrong Input. (Possible Commands : ADD, SEARCH, EXIT)" << std::endl;
			std::cout << std::endl;
		}
	}
	return (0);
}