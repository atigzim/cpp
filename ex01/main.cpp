#include "PhoneBook.hpp"

int main()
{
	std :: string command;
	PhoneBook book;
	int i;

	book.inds = 0;
	i = 0;
	while(true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): \n";
		if(!(getline(std::cin, command)))
		{
			std::cout << "EOF" << std::endl ;
			exit(1);
		}
		if (command == "ADD")
		{
			if (book.inds == 7)
			{
				i = 0;
			}
			if (book.contact[i].setContact())
				continue;
			if (book.inds <= 7)
				book.inds++;
			i++;
		}
		else if (command == "SEARCH")
			book.searchContact();
		else if (command == "EXIT")
			exit(0);
	}
	return(0);
}
