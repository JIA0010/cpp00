#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include <iomanip>
#include <cctype>
#include <sstream>
#include "Contact.hpp"

#define MAX_NUM 8
#define FIRST_NAME 0
#define LAST_NAME 1
#define NICK_NAME 2
#define PHONE_NUM 3
#define DARKEST_SECRET 4
#define ASCII_NUM 48


class PhoneBook
{
  private:
	int contact_num;
	int contact_size;
	Contact contact[MAX_NUM];
	int	string_to_int(const std::string str);
  public:
	PhoneBook();
	void add();
	void search();
};

void error_mes_with_exit();
bool check_print(std::string tmp);

#endif
