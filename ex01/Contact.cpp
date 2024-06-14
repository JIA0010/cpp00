#include "Contact.hpp"

Contact::Contact() {}

std::string Contact::get_firstname() const
{
	return firstname;
}

std::string Contact::get_lastname() const
{
	return lastname;
}

std::string Contact::get_nickname() const
{
	return nickname;
}

std::string Contact::get_phonenumber() const
{
	return phonenumber;
}

std::string Contact::get_darkestsecret() const
{
	return darkestsecret;
}