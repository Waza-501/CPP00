#include "contact.hpp"
#include <iostream>


contact::contact()
{
}

contact::~contact()
{
}

void	print_list()
{

}

void	print_contact()
{

}

std::string	get_info()
{
	std::string		info;

	std::getline(std::cin, info);
	return (info);
}

void	add_contact()
{
	std::cout << "Please enter your first name" << std::endl;
	fname = get_info();
	std::cout << "Please enter your last name" << std::endl;
	lname = get_info();
	std::cout << "Please enter your nickname" << std::endl;
	nickname = get_info();
	std::cout << "Please enter your phone number" << std::endl;
	phonemum = get_info();
	std::cout << "Please enter your darkest secret" << std::endl;
	secret = get_info();

}