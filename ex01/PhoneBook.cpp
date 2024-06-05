#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contact_num = 0;
	contact_size = 0;
}

void error_mes()
{
	std::cout << "error" << std::endl;
	exit(1);
}

bool check_print(std::string str)
{
	char ch;
	for(int i = 0; i < str.size(); i++)
	{
		ch = str[i];
		if(isprint(ch) == 0)
		{
			std::cout << "test" << std::endl;
			return(false);
		}
	}

	return true;
}

bool Contact:: input_info(int i)
{
	std::string tmp;
	while(true)
	{
		std::cout << ">";
		std::getline(std::cin, tmp);
		if (std::cin.eof() || std::cin.fail() || check_print(tmp) == false)
			error_mes();
		if(tmp == "" || tmp == " " || tmp == "\t" || tmp == "\n" || tmp == "\v" || tmp == "\f" || tmp == "\r")
			std::cout << "Please enter again" << std::endl;
		else
			break;
	}
	if(i == FIRST_NAME)
		firstname = tmp;
	if(i == LAST_NAME)
		lastname = tmp;
	if(i == NICK_NAME)
		nickname = tmp;
	if(i == PHONE_NUM)
		phonenumber = tmp;
	if(i == DARKEST_SECRET)
		darkestsecret = tmp;
	return true;
}


void PhoneBook::add()
{
	if (contact_num >= MAX_NUM)
	{
		contact_num = contact_num % 8;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			if (i == FIRST_NAME)
				std::cout << "----enter first name----" << std::endl;
			if (i == LAST_NAME)
				std::cout << "----enter last name----" << std::endl;
			if (i == NICK_NAME)
				std::cout << "----enter nickname----" << std::endl;
			if (i == PHONE_NUM)
				std::cout << "----enter phone number----" << std::endl;
			if (i == DARKEST_SECRET)
				std::cout << "----enter darkest secret----" << std::endl;
			contact[contact_num].input_info(i);
		}
	}
	if(contact_size < 8)
		contact_size++;
	contact_num++;
}

std::string Contact::get_firstname()
{
	return firstname;
}

std::string Contact::get_lastname()
{
	return lastname;
}

std::string Contact::get_nickname()
{
	return nickname;
}

void PhoneBook::search()
{
	if (contact_size == 0)
	{
		std::cout << "There is no contact" << std::endl;
		return ;
	}
	std::cout << "Index      First name Last name  Nick name" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < contact_size; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << contact[i].get_firstname() << "|";
		std::cout << std::right << std::setw(10) << contact[i].get_lastname() << "|";
		std::cout << std::right << std::setw(10) << contact[i].get_nickname() << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;

}
