/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:27:23 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/20 19:47:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	:	_name(name), _weapon(weapon)
{}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
