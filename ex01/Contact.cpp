#include "Contact.hpp"

Contact::Contact() {}

std::string Contact::get_firstname() const
{
	return m_firstname;
}

std::string Contact::get_lastname() const
{
	return m_lastname;
}

std::string Contact::get_nickname() const
{
	return m_nickname;
}

std::string Contact::get_phonenumber() const
{
	return m_phonenumber;
}

std::string Contact::get_darkestsecret() const
{
	return m_darkestsecret;
}