/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 07:07:41 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/17 09:27:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		n;
	Zombie	*zombies;

	n = 5;
	zombies = zombieHorde(n, "Mike");
	for (int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
