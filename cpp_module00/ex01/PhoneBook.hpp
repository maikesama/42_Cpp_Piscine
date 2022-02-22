#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"


class PhoneBook{

	public:

		PhoneBook(void);
		~PhoneBook(void);
		void	AddContact(void);
		void	SearchContact(void) const;
		void	DoYouWantMore(int n) const;
		
	private:

		Contact book[8];
		int	cn;
		int	limit;
	
};


#endif