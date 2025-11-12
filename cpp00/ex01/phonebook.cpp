#include "phonebook.hpp"

void PhoneBook::searchContact()
{
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
    std::string input;
    int index;
    
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