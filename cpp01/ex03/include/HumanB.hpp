/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:11:39 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/20 20:08:28 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB(const std::string& name);
	~HumanB();
	
	void		setWeapon(Weapon& weapon);
	void		attack();

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif
