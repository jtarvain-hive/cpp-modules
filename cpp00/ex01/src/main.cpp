/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 00:19:23 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/15 22:23:20 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static void	print_menu(void);

int	main(void)
{
	PhoneBook	book;
	std::string	input;
	while (true)
	{
		print_menu();
		do
		{
			std::cout << std::endl;
			std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
			if (!std::getline(std::cin, input))
				return (0);
			std::cout << input << std::endl;
		} while (input != "ADD" && input != "SEARCH" && input != "EXIT"
				&& input != "add" && input != "search" && input != "exit");
		if (input == "ADD" || input == "add")
		{
			if (book.add())
			{
				std::cout << std::endl;
				return (1);
			}
		}
		else if (input == "SEARCH" || input == "search")
		{
			if (book.search())
			{
				std::cout << std::endl;
				return (1);
			}
		}
		else
			break;
	}
	return (0);
}

static void	print_menu(void)
{
	std::cout << std::endl;
	std::cout << "***MENU***" << std::endl;
	std::cout << std::endl;
	std::cout << "1. ADD" << std::endl;
	std::cout << "2. SEARCH" << std::endl;
	std::cout << "3. EXIT" << std::endl;
	std::cout << std::endl;
}
