#include "PhoneBook.hpp"

void Contact::setContact()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin ,firstName);
	std::cout << "Enter lastName ";
	std::getline(std::cin , lastName);
	std::cout << "Enter nickname ";
	std::getline(std::cin , nickname);
	std::cout << "Enter phoneNumber ";
	std::getline(std::cin , phoneNumber);
	std::cout << "Enter darkestSecret ";
	std::getline(std::cin , darkestSecret);
}
