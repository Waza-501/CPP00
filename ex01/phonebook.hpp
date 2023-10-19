#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"


class phonebook
{
	private:
			contact contact[8];
			int		contact_nbr;
	public:
			phonebook();
			~phonebook();
			void	add_contact(void);
			void	search_contact(void);
};

#endif