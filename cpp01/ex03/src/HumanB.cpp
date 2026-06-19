/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:27:24 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/19 14:08:43 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB:~HumanB() {}

void	HumanB::setWeapon(Weapon type)
{
	this->_type = type;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << "attacks with their " << this->getType() << std::endl;
}
