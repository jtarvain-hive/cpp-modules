/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 02:11:13 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/05 06:42:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _className("ClapTrap"), _hp(100), _mp(50), _ad(20) {
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _className("ClapTrap"), _hp(100), _mp(50), _ad(20) {
	std::cout << "String constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _className(other._className), _hp(other._hp),
	_mp(other._mp), _ad(other._ad) {
	std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_className = other._className;
		this->_hp = other._hp;
		this->_mp = other._mp;
		this->_ad = other._ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(const std::string &target) {
	if (!this->_hp)
	{
		std::cout << this->_className << " " << this->_name << ": ...\n";
		return ;
	}
	if (!this->_mp)
	{
		std::cout << this->_name << " is out of energy\n";
		return ;
	}
	this->_mp--;
	std::cout << this->_className << " " << this->_name << " attacks " << target
		<< ", causing " << this->_ad << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_hp)
	{
		std::cout << this->_className << " " << this->_name << ": ...\n";
		return ;
	}
	if (!this->_mp)
	{
		std::cout << this->_name << " is out of energy\n";
		return ;
	}
	this->_mp--;
	this->_hp += amount;
	std::cout << this->_className << " " << this->_name << " repairs itself for "
		<< amount << " health\n";
}
