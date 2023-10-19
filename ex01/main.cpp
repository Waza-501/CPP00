/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Owen <Owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 10:52:56 by Owen          #+#    #+#                 */
/*   Updated: 2023/10/11 11:02:27 by Owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	phonebook 	phbook;
	std::string	input_string;

	while (true)
	{
		std::cout << "WELCOME TO YOUR PHONEBOOK" << std::endl;
		std::cout << "-------------------------" << std::endl;
		std::cout << "What would you like to do" << std::endl;
		std::cout << "~ADD~   ~SEARCH~   ~EXIT~" << std::endl;
		std::getline(std::cin, input_string);
		if (input_string == "ADD" || input_string == "add")
			std::cout << "You picked ADD" << std::endl;
			//phbook.
		else if (input_string == "SEARCH" || input_string == "search")
			std::cout << "You picked SEARCH" << std::endl;
		else if (input_string == "EXIT" || input_string == "exit")
			break;
		else
			std::cout << "Command not found. Please try again" << std::endl << "-----------------------------------" << std::endl;
	}
	return (true);
}