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
#include "ScavTrap.hpp"
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

	std::cout << "-- Construction chaining (ClapTrap ctor must run before ScavTrap's) --\n";
	ScavTrap	c;
	ScavTrap	gus("Gustavo");
	c = gus;
	ScavTrap	lalo("Lalo");

	for (int i = 0; i < 12; i++) {
		gus.guardGate();
		lalo.guardGate();
		lalo.attack("dude");
	}

	std::cout << std::endl << "-- Energy exhaustion: ScavTrap starts with 50 mp --\n";
	ScavTrap	energetic("Energetic");
	for (int i = 0; i < 52; i++)
		energetic.attack("wall");

	std::cout << std::endl << "-- Hit points exhaustion: dead ScavTrap can't attack or guard --\n";
	ScavTrap	beatenUp("BeatenUp");
	beatenUp.takeDamage(1000);
	beatenUp.attack("anyone");
	beatenUp.guardGate();

	std::cout << std::endl
		<< "-- Polymorphism: ClapTrap* pointing to a ScavTrap --\n";
	ClapTrap	*poly = new ScavTrap("Poly");
	poly->attack("shadow");
	std::cout << "Deleting through the base pointer:\n";
	delete poly;
	std::cout << "(virtual ~ClapTrap() made sure ~ScavTrap() ran first, "
		"then ~ClapTrap() -- without 'virtual' only ~ClapTrap() would fire, "
		"leaking anything ScavTrap-specific)\n";

	return (0);
}
