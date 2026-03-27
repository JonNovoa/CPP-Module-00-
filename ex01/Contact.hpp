#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <string>

class	Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecrest;

	public:
		Contact();
		~Contact();

		void	setFirstName(std::string name);
		void	setLastName(std::string name);
		void	setNickname(std::string nick);
		void	setPhoneNumber(std::string phone);
		void	setDarkestSecret(std::string secret);

		std::string	getFirstName() const;
		std::string getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;

		bool	isEmpty() const;	
};

#endif