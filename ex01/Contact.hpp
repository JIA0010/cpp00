#ifndef CONTACT_CPP
# define CONTACT_CPP

#include <iostream>
#include <string>

class	Contact
{
	private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	public:
	Contact();
	bool input_info(int i);
	std::string get_firstname();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phonenumber();
	std::string get_darkestsecret();
};

#endif
