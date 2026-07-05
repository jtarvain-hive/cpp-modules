/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 02:11:14 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/03 03:43:50 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
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
	return (0);
}
