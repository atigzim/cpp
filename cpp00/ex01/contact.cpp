/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atigzim <atigzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:42:02 by atigzim           #+#    #+#             */
/*   Updated: 2025/11/29 19:09:13 by atigzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int Contact::pars_phoneNumber(std::string str)
{
    if(str.empty())
        return 1;
        
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

void Contact::setContact()
{
    while (true)
    {
        if(contact_fields("Enter firstName: ", firstName))
            std::cout << "❌Invalid input. Please try again." << std::endl;
        else
            break;
    }
    while (true)
    {
        if(contact_fields("Enter lastName: ", lastName))
            std::cout << "❌Invalid input. Please try again." << std::endl;
        else
            break;
    }
    while (true)
    {
        if(contact_fields("Enter nickname: ", nickname))
            std::cout << "❌Invalid input. Please try again." << std::endl;
        else
            break;
    }
    while (true)
    {
        if(contact_fields("Enter phoneNumber: ", phoneNumber))
            std::cout << "❌Invalid input. Please try again." << std::endl;
        else
            break;
    }
    while (true)
    {
        if(contact_fields("Enter darkestSecret: ", darkestSecret))
            std::cout << "❌Invalid input. Please try again." << std::endl;
        else
            break;
    }
    
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
}