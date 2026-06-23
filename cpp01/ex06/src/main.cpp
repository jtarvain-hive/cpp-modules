/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 19:38:07 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/23 21:29:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	input;
	t_state		state;

	if (ac != 2)
	{
		std::cerr << "levels: DEBUG, INFO, WARNING, ERROR\n";
		std::cerr << "Usage: ./harl level\n";
		return (1);
	}
	input = av[1];
	if (input == "DEBUG")
		state = DEBUG;
	else if (input == "INFO")
		state = INFO;
	else if (input == "WARNING")
		state = WARNING;
	else if (input == "ERROR")
		state = ERROR;
	switch (state)
	{
		case DEBUG:
			harl.complain("DEBUG");
			std::cout << std::endl;
			[[fallthrough]];
		case INFO:
			harl.complain("INFO");
			std::cout << std::endl;
			[[fallthrough]];
		case WARNING:
			harl.complain("WARNING");
			std::cout << std::endl;
			[[fallthrough]];
		case ERROR:
			harl.complain("ERROR");
			std::cout << std::endl;
			[[fallthrough]];
		default:
			break;
	}
	return (0);
}
