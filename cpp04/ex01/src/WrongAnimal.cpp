/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:19 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/07 19:00:23 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
	: _type("WrongAnimal") {
	std::cout << "WrongAnimal Default Ctor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
	: _type(other._type) {
	std::cout << "WrongAnimal Copy Ctor\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal Assignment Overload\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Dt\n";
}

const std::string &WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Saisko makkaraa!?\n";
}
