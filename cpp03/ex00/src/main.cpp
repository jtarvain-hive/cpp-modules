/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 02:11:14 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/06 00:00:00 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "=== Basic construction / destruction ===\n";
	{
		ClapTrap	tmp("Scoped");
		tmp.attack("nobody");
	}
	std::cout << "(Scoped ClapTrap just left scope, destructor fired above)\n";

	std::cout << std::endl << "=== Copy constructor makes an independent copy ===\n";
	ClapTrap	original("Original");
	ClapTrap	copy(original);
	for (int i = 0; i < 5; i++)
		original.takeDamage(2);
	std::cout << "-- original (hp brought to 0) attacks:\n";
	original.attack("target");
	std::cout << "-- copy (same name, hp untouched) attacks:\n";
	copy.attack("target");

	std::cout << std::endl << "=== Copy assignment, including self-assignment ===\n";
	ClapTrap	a("A");
	ClapTrap	b("B");
	a = a;
	a = b;
	a.attack("dummy");

	std::cout << std::endl << "=== Energy (mp) exhaustion: attack costs 1 mp, starts at 10 ===\n";
	ClapTrap	grinder("Grinder");
	for (int i = 0; i < 12; i++)
		grinder.attack("wall");

	std::cout << std::endl << "=== Hit points (hp) exhaustion: no underflow, dead trap does nothing ===\n";
	ClapTrap	fragile("Fragile");
	fragile.takeDamage(100);
	fragile.attack("anyone");
	fragile.beRepaired(5);

	std::cout << std::endl << "=== beRepaired restores hp while alive ===\n";
	ClapTrap	patched("Patched");
	patched.takeDamage(8);
	patched.beRepaired(3);
	patched.attack("someone");

	return (0);
}
