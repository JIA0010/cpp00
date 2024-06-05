#include "Contact.hpp"

Contact::Contact()
{
	firstname = "";
	lastname = "";
	nickname = "";
	phonenumber = "";
	darkestsecret = "";
}

void Contact::check_info()
{
	std::cout << std::endl;
	std::cout << firstname << std::endl;
	std::cout << lastname << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phonenumber << std::endl;
	std::cout << darkestsecret << std::endl;

	// if(firstname == "" || lastname == "")
}