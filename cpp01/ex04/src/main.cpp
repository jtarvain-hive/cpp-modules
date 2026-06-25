/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 20:18:53 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/25 18:15:14 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (filename.empty() || s1.empty())
		return (1);

	std::ifstream	infile(filename);

	if (!infile.is_open())
	{
		std::cout << "Could not open file\n";
		return (1);
	}

	std::ofstream	outfile(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Could not open file\n";
		return (1);
	}

	std::string	line;
	size_t		pos;
	size_t		found;

	while (std::getline(infile, line))
	{
		pos = 0;
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			outfile << line.substr(pos, found - pos);
			outfile << s2;
			pos = found + s1.length();
		}
		outfile << line.substr(pos);
		outfile << "\n";
	}
	return (0);
}
