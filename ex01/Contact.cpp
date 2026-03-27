#include "Contact.hpp"

Contact::Contact(){/*Constructor vacio - los strings se inicializan solos*/}

Contact::~Contact(){/*Destructor vacio*/}

void	Contact::setFirstName(std::string name){ firstName = name; }

void	Contact::setLastName(std::string name){ lastName = name; }

void	Contact::setNickname(std::string nick){ nickname = nick; }

void	Contact::setPhoneNumber(std::string phone){ phoneNumber = phone; }

void	Contact::setDarkestSecret(std::string secret){ darkestSecrest = secret; }

std::string	Contact::getFirstName() const{ return firstName ;}

std::string	Contact::getLastName() const{ return lastName ;}

std::string	Contact::getNickname() const{ return nickname ;}

std::string	Contact::getPhoneNumber() const{ return phoneNumber ;}

std::string	Contact::getDarkestSecret() const{ return darkestSecrest ;}

bool	Contact::isEmpty() const{ return firstName.empty();}


