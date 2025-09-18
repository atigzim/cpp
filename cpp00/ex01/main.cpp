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
			book.setContact();
		else if (command == "EXIT")
			exit(1);
		else { std::cout << "Invalid command.\n"; }
	}
	return(0);
}
