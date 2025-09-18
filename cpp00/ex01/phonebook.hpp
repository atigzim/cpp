#ifndef PHONEBOOK
# define PHONEBOOK

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
class phonebook
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	public :
		void setContact()
		{
			std :: cout << "Enter first name: ";
			std :: getline(std :: cin , firstName);
			std :: cout << "Enter lastName ";
			std :: getline(std :: cin , lastName);
			std :: cout << "Enter nickname ";
			std :: getline(std :: cin , nickname);
			std :: cout << "Enter phoneNumber ";
			std :: getline(std :: cin , phoneNumber);
			std :: cout << "Enter darkestSecret ";
			std :: getline(std :: cin , darkestSecret);
		}
};

# endif