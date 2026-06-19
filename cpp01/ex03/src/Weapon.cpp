/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:27:28 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/19 02:59:18 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_name = type;
}

Weapon::~Weapon() {}

std::string	Weapon::&getType(std::string type) const
{
	return (this->_name);
}

void	Weapon::setType(std::string &type)
{
	this->_type = type;
}
