/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 22:51:58 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/05 06:34:50 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Default Constructor\n";
	this->_className = "FragTrap";
	this->_mp = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap String Constructor\n";
	this->_className = "FragTrap";
	this->_mp = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap Copy Constructor\n";
	this->_className = "FragTrap";
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_mp = other._mp;
		this->_ad = other._ad;
		this->_className = "FragTrap";
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor\n";
}

void	FragTrap::highFivesGuys(void) {
	if (this->_hp)
		std::cout << "FragTrap " << this->_name
			<< " requests the highest of Fives from everyone\n";
	else
		std::cout << "FragTrap " << this->_name
			<< ": ...\n";
}
