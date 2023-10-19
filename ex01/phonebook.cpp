#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>

phonebook::phonebook()
{
	int		idx;

	idx = 0;
	while (idx < 8)
	{
		contact[idx].hasinfo = false;
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

void	phonebook::add_contact(void)
{
	contact_nbr = contact_number(contact_nbr);
	contact[contact_nbr].add_contact();
	contact_nbr++;
	std::cout << "Contact added!" << std::endl;
}

void	phonebook::search_contact(void)
{

}