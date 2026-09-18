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

public:
	PhoneBook();
	void addContact();
	void displayContacts() const;
	void displayContact(int index) const;
	void searchContact() const;
};

#endif