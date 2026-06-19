/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:27:23 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/19 14:09:04 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon type)
{
	this->_name = name;
	this->_type = type;
}

HumanA:~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->_name << "attacks with their " << this->getType() << std::endl;
}
