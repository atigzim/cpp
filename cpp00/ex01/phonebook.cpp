/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atigzim <atigzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:42:57 by atigzim           #+#    #+#             */
/*   Updated: 2025/11/29 19:16:14 by atigzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : inds(0) {}
PhoneBook::~PhoneBook() {
    std::cout << "PhoneBook destructor called." << std::endl;
}
void PhoneBook::addinds()
{
    if (inds < 8)
        inds++;
}
void PhoneBook::searchContact()
{
    int index;
    std::string input;
    
    if(this->inds == 0)
    {
        std::cout << "No contacts available to display." << std::endl;
        return;
    }
    std::cout << "     Index|First Name| Last Name|  Nickname\n";
    for (int i = 0; i < this->inds; i++)
    {
        std::cout << "--------------------------------------------\n";
        std::cout << std::setw(10) << i + 1 << "|";
        this->contact[i].printContact();
        std::cout << std::endl;
    }
    
    while (true)
    {
        std::cout << "Enter the index of the contact to view details: ";
        std::getline(std::cin, input);
        if(input.empty())
            exit(1);
        if(pars_index(input))
            continue;
        index = std::atoi(input.c_str());
        if (index < 0 || index > inds)
        {
            std::cout << "❌ Invalid index! Try again.\n";
            continue;
        }
        contact[index - 1].chooseContack();
        break;
    }
}

int PhoneBook::pars_index(std::string input)
{
    if (contact[0].pars_phoneNumber(input))
    {
        std::cout << "❌Input cannot be empty. Please enter a valid index: ";
        return (1);
    }
    return (0);
}
