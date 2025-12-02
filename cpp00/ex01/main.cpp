/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atigzim <atigzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:42:46 by atigzim           #+#    #+#             */
/*   Updated: 2025/11/29 19:17:35 by atigzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook   phonebook;
    std ::string  command;
    int        i;
    i = 0;
    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if(command.empty())
            continue;
        if (command == "ADD")
        {
            phonebook.addinds();
            phonebook.contact[i].setContact();
            i++;
            if (i == 8)
                i = 0; 
        }
        if(command == "SEARCH")
            phonebook.searchContact();
        if (command == "EXIT")
            exit(0);    
    }
    return (0);
}
