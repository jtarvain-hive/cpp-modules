/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:11:39 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/19 13:50:41 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	
	void	setWeapon(Weapon type);
	void	attack();

private:
	std::string	_name;
	Weapon		_type;
};

#endif
