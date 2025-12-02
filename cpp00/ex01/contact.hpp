#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <cstdlib>


class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setContact();
		void printContact();
		int contact_fields(std::string str, std::string &fie);
		int pars_phoneNumber(std::string str);
		int pars_contact_fields(std::string &str);
		void chooseContack();
};

# endif