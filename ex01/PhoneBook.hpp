#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		int setContact();
		void printContact();
		int contact_fields(std::string str, std::string &fie);
		int pars_phoneNumber(std::string str);
		int pars_contact_fields(std::string &str);
	};
	
class PhoneBook
{
	private:
	
	public :
		void searchContact();
		int inds;		
		Contact contact[8];
}; 


# endif