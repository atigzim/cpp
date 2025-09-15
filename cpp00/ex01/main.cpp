#include "phonebook.hpp"

int main()
{
	std :: string command;
	phonebook book;
	while(1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): \n";
        std::getline(std::cin, command);
		if (command == "ADD")
			
		if (command == "EXIT")
			exit(1);
	}
	return(0);
}
