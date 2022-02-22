#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) : cn(0), limit(0)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	valid_information(std::string str)
{
	bool	val = false;

	while (val == false)
	{
		if (str.size() > 0)
		{
			val = true;
			return ;
		}
		std::cout << "Error : This Parameter Needs To be Compiled. Fill It Please." << std::endl;
		std::cout << "> ";
		std::getline(std::cin, str);
	}
}

void	PhoneBook::AddContact(void)
{
	if (this->cn > 7)
		this->cn = 0;
	std::cout << "Insert First Name : ";
	std::getline(std::cin, this->book[cn].firstname);
	valid_information(this->book[cn].firstname);
	std::cout << std::endl;

	std::cout << "Insert Last Name : ";
	std::getline(std::cin, this->book[cn].lastname);
	valid_information(this->book[cn].lastname);
	std::cout << std::endl;

	std::cout << "Insert Nickame : ";
	std::getline(std::cin, this->book[cn].nickname);
	valid_information(this->book[cn].nickname);
	std::cout << std::endl;

	std::cout << "Insert Phone Number : ";
	std::getline(std::cin, this->book[cn].PhoneNumber);
	valid_information(this->book[cn].PhoneNumber);
	std::cout << std::endl;

	std::cout << "Insert Darkest Secret : ";
	std::getline(std::cin, this->book[cn].DarkestSecret);
	valid_information(this->book[cn].DarkestSecret);
	std::cout << std::endl;

	this->limit++;
	this->cn += 1;
}

int		ft_check_num(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		if (!isdigit(str[0]))
			return (-1);
		i++;
	}
	return (atoi(str.c_str()));
}

void	PhoneBook::SearchContact(void) const
{
	int	i = 0;
	int	j;

	while (i < this->limit && i < 8)
	{
		std::cout << "     " << (i + 1) << "    " << "|";

		if (this->book[i].firstname.length() <= 10)
		{
			j = this->book[i].firstname.length();
			std::cout << this->book[i].firstname;
			while (j <= 10)
			{
				std::cout << " ";
				j++;
			}
		}
		else
		{
			j = 1;
			while (j < 10)
			{
				std::cout << this->book[i].firstname[j];
				j++;
			}
			std::cout << ".";
		}
		std::cout << "|";

		if (this->book[i].lastname.length() <= 10)
		{
			j = this->book[i].lastname.length();
			std::cout << this->book[i].lastname;
			while (j <= 10)
			{
				std::cout << " ";
				j++;
			}
		}
		else
		{
			j = 1;
			while (j < 10)
			{
				std::cout << this->book[i].lastname[j];
				j++;
			}
			std::cout << ".";
		}
		std::cout << "|";

		if (this->book[i].nickname.length() <= 10)
		{
			j = this->book[i].nickname.length();
			std::cout << this->book[i].nickname;
			while (j <= 10)
			{
				std::cout << " ";
				j++;
			}
		}
		else
		{
			j = 1;
			while (j < 10)
			{
				std::cout << this->book[i].nickname[j];
				j++;
			}
			std::cout << ".";
		}
		std::cout << std::endl;

		i++;
	}
	std::cout << std::endl;
	std::cout << "Please Insert A Number : ";
	std::string str;
	std::getline(std::cin, str);
	std::cout << std::endl;
	j = ft_check_num(str);
	this->DoYouWantMore(j);
	return ;
}

void    PhoneBook::DoYouWantMore(int n) const
{
    if (n < 1 || (n > 8 || n > this->limit))
	{
		std::cout << "The number you selected doesn't exist or is not a contact." << std::endl;
		std::cout << std::endl;
		return;
	}
	std::cout << "First Name : " << book[n - 1].firstname << std::endl;
	std::cout << "Last Name : " << book[n - 1].lastname << std::endl;
	std::cout << "Nickname : " << book[n - 1].nickname << std::endl;
	std::cout << "Phone Number : " << book[n - 1].PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << book[n - 1].DarkestSecret << std::endl;
	std::cout << std::endl;
	return ;
}
