#include "replace.hpp"
#include <string>

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Use args: <filename>, <str1>, <str2>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	filename = av[1];
	std::string	str1 = av[2];
	std::string	str2 = av[3];
	std::cout << filename << str1 << str2 << std::endl;
	std::cout << filename.length() << str1.length() << str2.length() << std::endl;
	return (EXIT_SUCCESS);
}
