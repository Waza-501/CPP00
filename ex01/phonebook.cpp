#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

phonebook::phonebook()
{
	int		idx;
	int		num;

	idx = 0;
	while (idx < 8)
	{
		contact[idx].used = false;
		idx++;
	}
}

phonebook::~phonebook()
{
}

int		contact_number(int num)
{
	if (num < 8)
		return(num);
	return (0);

}

void	phonebook::add_contact()
{
	contact_nbr = contact_number(contact_nbr);
	contact[contact_nbr].add_contact();
}

void	phonebook::search_contact()
{
}