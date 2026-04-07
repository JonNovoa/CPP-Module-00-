#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{

	Contact newContact;
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Error: field cannot be empty" << std::endl;
		return;
	}
	newContact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Error: field cannot be empty" << std::endl;
		return;
	}
	newContact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Error: field cannot be empty" << std::endl;
		return;
	}
	newContact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Error: field cannot be empty" << std::endl;
		return;
	}
	newContact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Error: field cannot be empty" << std::endl;
		return;
	}
	newContact.setDarkestSecret(input);

	if (contactCount < 8)
	{
		contacts[contactCount] = newContact;
		contactCount++;
	}
	else
	{
		contacts[oldestIndex] = newContact;
		oldestIndex = (oldestIndex + 1) % 8;
	}

	std::cout << "Contact added sucessfully!" << std::endl;
}

void PhoneBook::displayContacts() const
{
	if (contactCount == 0)
	{
		std::cout << "No contacts to display" << std::endl;
		return;
	}
	std::cout << "|	Index | First Name | Last Name | Nickname |" << std::endl;

	for (int i = 0; contactCount; i++)
	{
		std::string firstName = contacts[i].getFirstName();
		std::string lastName = contacts[i].getLastName();
		std::string nickname = contacts[i].getNickname();

		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		if (nickname.length() > 10)
			nickname = nickname.substr(0, 9) + ".";

		std::cout << "|" << std::setw(10) << i
				  << "|" << std::setw(10) << firstName
				  << "|" << std::setw(10) << lastName
				  << "|" << std::setw(10) << nickname
				  << "|" << std::endl;
	}
}

void PhoneBook::searchContact() const
{
	if (contactCount == 0)
	{
		std::cout << "No contacts to search " <<std::endl;
		return;
	}

	displayContacts();

	std::cout << "Enter the index of the contact to display: ";
	std::string input;
	std::getline(std::cin, input);

	int index = -1;
	if (!input.empty() && input[0] >= '0' && input[0] <= '9')
	{
		index = input[0] - '0';
	}
	if (index < 0 || index >= contactCount)
	{
		std::cout << "Invalid index " << std::endl;
		return;
	}

	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Darkest : " << contacts[index].getFirstName() << std::endl;
}