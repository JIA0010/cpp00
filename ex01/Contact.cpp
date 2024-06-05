#include "Contact.hpp"

Contact::Contact()
{
	firstname = "";
	lastname = "";
	nickname = "";
	phonenumber = "";
	darkestsecret = "";
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

std::string Contact::get_phonenumber()
{
	return phonenumber;
}

std::string Contact::get_darkestsecret()
{
	return darkestsecret;
}