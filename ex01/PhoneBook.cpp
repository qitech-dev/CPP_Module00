#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : count(0), next_index(0)
{

}

void PhoneBook::addContact()
{
    Contact contact;
    std::string input;

    do
    {
        std::cout << "First name: " << std::endl;
        if (!std::getline(std::cin, input))
    		return;
    }
    while (input.empty());
    contact.setFirstName(input);

    do
    {
        std::cout << "Last name: " << std::endl;
        if (!std::getline(std::cin, input))
    		return;
    }
    while (input.empty());
    contact.setLastName(input);

    do
    {
        std::cout << "Nickname: " << std::endl;
        if (!std::getline(std::cin, input))
    		return;
    }
    while (input.empty());
    contact.setNickname(input);

    do
    {
        std::cout << "Phone number: " << std::endl;
        if (!std::getline(std::cin, input))
    		return;
    }
    while (input.empty());
    contact.setPhoneNumber(input);

    do
    {
        std::cout << "Darkest secret: " << std::endl;
        if (!std::getline(std::cin, input))
    		return;
    }
    while (input.empty());
    contact.setDarkestSecret(input);

    contacts[next_index] = contact;
    next_index = (next_index + 1) % 8;
    if (count < 8)
        count++;
}

void PhoneBook::displayContacts() const
{
    int i;
    std::string first;
    std::string last;
    std::string nick;

    i = 0;
    while (i < count)
    {
        first = contacts[i].getFirstName();
        last = contacts[i].getLastName();
        nick = contacts[i].getNickname();

        if (first.length() > 10)
            first = first.substr(0, 9) + ".";
        if (last.length() > 10)
            last = last.substr(0, 9) + ".";
        if (nick.length() > 10)
            nick = nick.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << first << "|";
        std::cout << std::setw(10) << last << "|";
        std::cout << std::setw(10) << nick << std::endl;

        i++;
    }
}

void PhoneBook::displayContact(int index) const
{
    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact() const
{
    std::string input;
    int index;

    if (count == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    displayContacts();

    std::cout << "Index: " << std::endl;
	if (!std::getline(std::cin, input))
		return;
    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    index = input[0] - '0';

    if (index >= count)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    displayContact(index);
}
