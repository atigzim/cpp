#include "phonebook.hpp"

int main()
{
    PhoneBook   phonebook;
    std ::string  command;
    int        i;
    phonebook.inds = 0;
    i = 0;
    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if(command.empty())
            exit(1);
        if (command == "ADD")
        {
            if(phonebook.inds < 8)
                phonebook.inds++;
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