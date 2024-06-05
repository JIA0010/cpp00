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
			return(false);
	}

	return true;
}

bool check_space(std::string str)
{
	int i = 0;
	if(str.empty())
	{
		std::cout << "Please enter again" << std::endl;
		return false;
	}
	while(str[i] != '\0')
	{
		if(str[i] == 0 || str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 || str[i] == 13)
		{
			std::cout << "Please enter again" << std::endl;
			return false;
		}
		i++;
	}
	return true;
}

bool Contact:: input_info(int i)
{
	int j = 0;
	std::string tmp;
	while(true)
	{
		std::cout << ">";
		std::getline(std::cin, tmp);
		if (std::cin.eof() || std::cin.fail() || check_print(tmp) == false)
			error_mes();
		if(check_space(tmp) == false)
			continue;
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

int	string_to_int(const std::string str)
{
	int	result;

	std::istringstream tmp(str);
	if (!(tmp >> result))
		return (-1);
	return (result);
}

std::string change_length(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}


void PhoneBook::search()
{
	std::string tmp;
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
		std::cout << std::right << std::setw(10) << change_length(contact[i].get_firstname()) << "|";
		std::cout << std::right << std::setw(10) << change_length(contact[i].get_lastname()) << "|";
		std::cout << std::right << std::setw(10) << change_length(contact[i].get_nickname()) << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;

	while(true)
	{
		std::cout << "Enter index" << std::endl;
		std::getline(std::cin, tmp);
		if(tmp[0] >= '0' && tmp[0] < contact_size + ASCII_NUM && tmp.substr(1, 1).empty() && check_print(tmp) == true)
			break;
		else
			continue;
	}
	std::cout << "First name: " << contact[string_to_int(tmp)].get_firstname() << std::endl;
	std::cout << "Last name: " << contact[string_to_int(tmp)].get_lastname() << std::endl;
	std::cout << "Nick name: " << contact[string_to_int(tmp)].get_nickname() << std::endl;
	std::cout << "Phone number: " << contact[string_to_int(tmp)].get_phonenumber() << std::endl;
	std::cout << "Darkest secret: " << contact[string_to_int(tmp)].get_darkestsecret() << std::endl;
}


//issとは。→自作のstoi関数
/*
std::string をint に変換したい。
std::input string stream を追えばいい
std::istringstream iss(str);でissでstrを受け取る。iss = strと同じ
*/