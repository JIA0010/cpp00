#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;

	std::string cmd;
	if (argc != 1)
	{
		std::cout << "usage: ./phonebook";
		return (1);
	}
	while (true)
	{
		std::cout << "cmd >";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || std::cin.fail() || check_print(cmd) == false)
			error_mes_with_exit();
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			std::exit(0);
	}
}
