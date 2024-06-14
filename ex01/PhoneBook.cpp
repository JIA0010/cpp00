#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	: contact_num(0), contact_size(0)
{
}

void	error_mes_with_exit(void)
{
	std::cout << "error" << std::endl;
	std::exit(0);
}

//印字可能であるかどうかを判定
bool	check_print(std::string str)
{
	char	ch;

	for (int i = 0; i < str.size(); i++)
	{
		ch = str[i];
		if (std::isprint(ch) == 0)
			return (false);
	}
	return (true);
}

//文字列にスペースが含まれているかどうかをチェック
bool	contains_non_space_char(std::string str)
{
	int	i;

	i = 0;
	if (str.empty())
	{
		std::cout << "Please enter again" << std::endl;
		return (false);
	}
	while (str[i] != '\0')
	{
		if (std::isspace(str[i]) == 0)
			return (true);
		i++;
	}
	std::cout << "Please enter again" << std::endl;
	return (false);
}

#define SEARCH_PROMPT ">"

void Contact::input_info(int contact_index)
{
	std::string input;
	while (true)
	{
		std::cout << SEARCH_PROMPT;
		std::getline(std::cin, input);
		if (std::cin.eof() || std::cin.fail() || check_print(input) == false)
			error_mes_with_exit();
		if (contains_non_space_char(input) == false)
			continue ;
		break ;
	}
	std::string *assigned_member_array[] =
		{&m_firstname, &m_lastname, &m_nickname, &m_phonenumber,
			&m_darkestsecret};
	*assigned_member_array[contact_index] = input;
}

void PhoneBook::add()
{
	contact_num = contact_num % MAX_NUM;
	std::string assigned_member_array[] =
		{"----enter first name----",
			"----enter last name----",
			"----enter nickname----",
			"----enter phone number----",
			"----enter darkest secret----"};
	for (int i = 0; i < 5; i++)
	{
		std::cout << assigned_member_array[i] << std::endl;
		contact[contact_num].input_info(i);
	}
	if (contact_size < MAX_NUM)
		contact_size++;
	contact_num++;
}

int PhoneBook::string_to_int(const std::string str)
{
	int	result;

	std::istringstream input(str);
	if (!(input >> result))
		return (-1);
	return (result);
}

// 文字列を十文字長にする
std::string change_length(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}

void PhoneBook::search()
{
	std::string input;
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
	while (true)
	{
		std::cout << "Enter index" << std::endl;
		std::getline(std::cin, input);
		if (input[0] >= '0' && input[0] < contact_size + ASCII_NUM
			&& input.substr(1, 1).empty() && check_print(input) == true)
			break ;
		else
			continue ;
	}
	std::cout << "First name: " << contact[string_to_int(input)].get_firstname() << std::endl;
	std::cout << "Last name: " << contact[string_to_int(input)].get_lastname() << std::endl;
	std::cout << "Nick name: " << contact[string_to_int(input)].get_nickname() << std::endl;
	std::cout << "Phone number: " << contact[string_to_int(input)].get_phonenumber() << std::endl;
	std::cout << "Darkest secret: " << contact[string_to_int(input)].get_darkestsecret() << std::endl;
}
