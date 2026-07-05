/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 02:11:09 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/03 03:14:40 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	ClapTrap {
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_mp;
	unsigned int	_ad;
};
