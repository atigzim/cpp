#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <cstdlib>

#include "contact.hpp"
	
class PhoneBook
{
	private:
		int inds;		
		
	public :
		void searchContact();
        int pars_index(std::string input);
		void addinds();
		PhoneBook();
		~PhoneBook();
		Contact contact[8];
	
}; 
# endif