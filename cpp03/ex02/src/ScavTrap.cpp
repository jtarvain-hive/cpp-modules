/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 04:09:44 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/04 23:24:19 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	this->_className = "ScavTrap";
	std::cout << "ScavTrap Default Constructor\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->_className = "ScavTrap";
	std::cout << "ScavTrap String Constructor\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap Copy Constructor\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap Copy Assignment Operator\n";
	if (this != &other) {
		this->_name = other._name;
		this->_className = other._className;
		this->_hp = other._hp;
		this->_mp = other._mp;
		this->_ad = other._ad;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor\n";
}
void	ScavTrap::guardGate() {
	if (this->_hp)
		std::cout << "ScavTrap " << this->_name
			<< " enters Gate keeper mode\n";
	else
		std::cout << "ScavTrap " << this->_name << ": ...\n";
}
