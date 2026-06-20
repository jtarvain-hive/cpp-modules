/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 02:27:28 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/20 19:12:24 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	this->_type = type;
}

Weapon::~Weapon() {}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}
