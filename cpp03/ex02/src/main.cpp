/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 02:11:14 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/04 23:31:19 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Ex00 Tests: \n";
	ClapTrap	a;
	ClapTrap	jack("Jack");
	ClapTrap	b = jack;
	ClapTrap	hector("Hector");

	a = jack;
	jack.attack("Barbossa");
	for (int i = 0; i < 12; i++) {
		jack.takeDamage(1);
	}
	for (int i = 0; i < 12; i++) {
		hector.beRepaired(10);
		jack.attack("Barbossa");
	}

	std::cout << std::endl << std::endl
		<< "Ex01 Tests: \n";

	ScavTrap	c;
	ScavTrap	gus("Gustavo");
	c = gus;
	ScavTrap	lalo("Lalo");

	for (int i = 0; i < 12; i++) {
		gus.guardGate();
		c.guardGate();
		c.attack("dude");
	}

	std::cout << std::endl << std::endl
		<< "Ex02 Tests: \n";

	FragTrap	frag;
	FragTrap	alice("Alice");
	FragTrap	bob("Bob");

	for (int i = 0; i < 12; i++) {
		alice.highFivesGuys();
		bob.attack("Alice");
		alice.takeDamage(10);
	}

	std::cout << std::endl
		<< "-- Heap allocation tests (new/delete) --\n";

	ClapTrap	*heapClap = new ClapTrap("HeapClap");
	ScavTrap	*heapScav = new ScavTrap("HeapScav");
	FragTrap	*heapFrag = new FragTrap("HeapFrag");

	heapClap->attack("dummy");
	heapScav->guardGate();
	heapFrag->highFivesGuys();

	std::cout << std::endl
		<< "-- Deleting heap objects: children destroyed before base --\n";
	delete heapFrag;
	delete heapScav;
	delete heapClap;

	return (0);
}
