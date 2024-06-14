#ifndef CONTACT_CPP
# define CONTACT_CPP

#include <iostream>
#include <string>

class	Contact
{
	private:
	std::string m_firstname;//m_追加したりすることで、this->の手間が省ける
	std::string m_lastname;
	std::string m_nickname;
	std::string m_phonenumber;
	std::string m_darkestsecret;

	public:
	Contact();
	void input_info(int contact_index);
	std::string get_firstname() const;
	std::string get_lastname() const;
	std::string get_nickname() const;
	std::string get_phonenumber() const;
	std::string get_darkestsecret() const;
};

#endif
