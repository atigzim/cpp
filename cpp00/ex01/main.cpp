#include "PhoneBook.hpp"

int main()
{
	std :: string command;
	PhoneBook book;
	while(true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): \n";
		if(!(getline(std::cin, command)))
		{
			std::cout << "EOF" << std::endl ;
			exit(1);
		}
		if (command == "ADD")
			book.contact[0].setContact();
		else if (command == "EXIT")
			exit(1);

	}
	return(0);
}
