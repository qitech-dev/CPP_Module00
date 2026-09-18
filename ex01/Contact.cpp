#include "Contact.hpp"

Contact::Contact()
{

}

void	Contact::setFirstName(std::string name)
{
	first_name = name;
}

std::string Contact::getFirstName() const
{
	return (first_name);
}

void	Contact::setLastName(std::string name)
{
	last_name = name;
}

std::string Contact::getLastName() const
{
	return (last_name);
}

void	Contact::setNickname(std::string name)
{
	nickname = name;
}

std::string Contact::getNickname() const
{
	return (nickname);
}

void	Contact::setPhoneNumber(std::string number)
{
	phone_number = number;
}

std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}

void	Contact::setDarkestSecret(std::string secret)
{
	darkest_secret = secret;
}

std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}
