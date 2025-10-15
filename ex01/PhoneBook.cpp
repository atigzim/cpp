#include "PhoneBook.hpp"

int  Contact::pars_phoneNumber(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if(isdigit(str[i]) == 0)
			return (1);	
	}
	return (0);
}
int Contact::pars_contact_fields(std::string &str)
{
	if (str.empty())
		return (1);
	for (size_t i = 0; i < str.size(); i++)
	{
		if(isalnum(str[i]) == 0)
			return (1);	
	}
	return (0);
}
int Contact::contact_fields(std::string str, std::string &fie)
{
	std::cout << str ;
	std::getline(std::cin ,fie);
	if(pars_contact_fields(fie))
		return (1);
	if(str == "Enter phoneNumber: ")
	{
		if(pars_phoneNumber(fie))
			return (1);
	}
	return(0);
}

int Contact::setContact()
{
	if (contact_fields("Enter first name: ", firstName))
		return(1);
	if (contact_fields("Enter lastName: ", lastName))
		return(1);
	if (contact_fields("Enter nickname: ", nickname))
		return(1);
	if (contact_fields("Enter phoneNumber: ", phoneNumber))
		return(1);
	if (contact_fields("Enter darkestSecret: ", darkestSecret))
		return(1);
	return (0);
}

void Contact::printContact()
{
	if (firstName.length() > 10)
		std::cout << firstName.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << firstName;

	std::cout << "|";
	if (lastName.length() > 10)
		std::cout << lastName.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << lastName;

	std::cout << "|";
	if (nickname.length() > 10)
		std::cout << nickname.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << nickname;

	std::cout << "|" << std::endl;
}

void Contact::chooseContack()
{
	std::cout << "firstName : " << firstName <<"\n" ;
	std::cout << "lastName : " << lastName <<"\n";
	std::cout << "nickname : " << nickname <<"\n";
	std::cout << "phoneNumber : " << phoneNumber <<"\n";
	std::cout << "darkestSecret : " << darkestSecret <<"\n";
	// std::cout << std ::endl;
}

void	PhoneBook::searchContact()
{
	for (int i = 0; i < inds ; i++)
	{
		for (int j = 0; j < 11; j++)
			std::cout << "---";
		std::cout << "\n" << i + 1 << " |";
		contact[i].printContact();
	}

	if(inds > 0)
		for (int j = 0; j < 11; j++)
			std::cout << "---";
	std::cout << std ::endl;

	while (inds > 0)
	{
		std::string command;
		std::cout << "Choose a contact (1-> " << inds << "): ";
		
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEnd of input detected. Exiting search.\n";
			break;
		}
		if (contact[0].pars_phoneNumber(command) == 0)
		{
			int index = std::stoi(command);

			if (index >= 1 && index <= inds)
			{
				contact[index - 1].chooseContack(); 
				break;
			}
			else
				std::cout << "❌ Invalid index! Try again.\n";
		}
		else
			std::cout << "❌ Please enter a number only.\n";
	}
}
