#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
        std::cerr << "Invalid number of arguments" << std::endl;
        return 1;
	}
	const std::string input = av[1];
	ScalarConverter::convert(input);
}