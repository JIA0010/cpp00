#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contact_num = 1;
	size = 0;
}

void PhoneBook::add()
{
	std::string tmp;
	if (size >= MAX_NUM)
		; // over_ride();
	else
	{
		for (int i = 0; i < 5; i++)
		{
			if (i == 0)
				std::cout << "----enter first name----" << std::endl;
			if (i == 1)
				std::cout << "----enter last name----" << std::endl;
			if (i == 2)
				std::cout << "----enter nickname----" << std::endl;
			if (i == 3)
				std::cout << "----enter phone number----" << std::endl;
			if (i == 4)
				std::cout << "----enter darkest secret----" << std::endl;
			std::cin >> tmp;
		}
	}
}

void PhoneBook::search()
{
}
