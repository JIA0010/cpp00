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
		for (int i = 1; i < argc; i++)
			tmp += argv[i];
	}
	for (int x = 0; x < tmp.length(); x++)
		tmp[x] = toupper(tmp[x]);
	std::cout << tmp << std::endl;
	return (0);
}
