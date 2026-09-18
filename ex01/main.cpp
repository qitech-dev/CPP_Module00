#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

	std::cout << "Enter ADD, SEARCH or EXIT:" << std::endl;
    while (std::getline(std::cin, command))
    {
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break;
    }

    return (0);
}