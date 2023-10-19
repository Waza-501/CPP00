#include "contact.hpp"
#include <iostream>


contact::contact()
{
}

contact::~contact()
{
}

void	contact::print_list(void)
{

}

void	contact::print_contact(void)
{

}

std::string	get_info(void)
{
	std::string		info;

	std::getline(std::cin, info);
	//std::cout << "info found" << std::endl;
	return (info);
}

void	contact::add_contact(void)
{
	std::cout << "Please enter your first name" << std::endl;
	fname = get_info();
	std::cout << "Please enter your last name" << std::endl;
	lname = get_info();
	std::cout << "Please enter your nickname" << std::endl;
	nickname = get_info();
	std::cout << "Please enter your phone number" << std::endl;
	phonenum = get_info();
	std::cout << "Please enter your darkest secret" << std::endl;
	darksecret = get_info();
	hasinfo = true;
}