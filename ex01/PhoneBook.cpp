#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::addContact()
{
	Contact	newContact;
	std::string	input;

	std::cout << "Enter first name: ";
	std::getline(std:: cin, input);
	if(input.empty())
	{
		std::cout << "Error: field cannot be empty" << std::endl;
		return;
	}
	newContact.setFirstName(input);
}