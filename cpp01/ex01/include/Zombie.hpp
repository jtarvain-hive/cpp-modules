/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 07:07:50 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/17 09:29:39 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
public:
	Zombie();
	~Zombie();
	void	announce(void) const;
	void	set_name(const std::string name);

private:
	std::string	_name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif
