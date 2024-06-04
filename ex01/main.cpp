// #include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	// PhoneBook	phonebook;
	std::string cmd;
	if (argc != 1)
	{
		std::cout << "usage: ./megaphone";
		return (1);
	}
	while (true)
	{
		std::cout << "cmd >";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			exit(0);
		if (cmd == "ADD")
		{
			continue ;
		}
		else if (cmd == "SREACH")
		{
			continue ;
		}
		else if (cmd == "EXIT")
			exit(0);
	}
}
