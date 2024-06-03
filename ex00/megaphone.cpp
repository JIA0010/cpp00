#include <cctype>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string tmp;
	if (argc <= 1)
		tmp = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int idx = 1; idx < argc; idx++)
			tmp += argv[idx];
	}
	for (int i = 0; i < tmp.length(); i++)
		tmp[i] = toupper(tmp[i]);
	std::cout << tmp << std::endl;
	return (0);
}
