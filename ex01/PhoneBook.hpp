#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
private:
	Contact contacts[8];
	int	count;
	int	next_index;
	void displayContacts() const;
	void displayContact(int index) const;

public:
	PhoneBook();
	void addContact();
	void searchContact() const;
};

#endif