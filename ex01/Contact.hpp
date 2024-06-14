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
	std::string get_firstname() const;
	std::string get_lastname() const;
	std::string get_nickname() const;
	std::string get_phonenumber() const;
	std::string get_darkestsecret() const;
};

#endif
