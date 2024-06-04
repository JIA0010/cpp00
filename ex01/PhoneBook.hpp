#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

#define MAX_NUM 8

class PhoneBook
{
  private:
	int contact_num;
	int size;
	Contact contact[8];
  public:
	PhoneBook();
	void add();
	void search();
};

#endif
