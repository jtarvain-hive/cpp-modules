/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 02:11:14 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/05 03:56:06 by jtarvain         ###   ########.fr       */
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

	ScavTrap	c;
	ScavTrap	gus("Gustavo");
	c = gus;
	ScavTrap	lalo("Lalo");

	for (int i = 0; i < 12; i++) {
		gus.guardGate();
		lalo.guardGate();
		lalo.attack("dude");
	}

	for (int i = 0; i < 12; i++) {
		
	}

	return (0);
}
