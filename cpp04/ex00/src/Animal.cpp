/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:16 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/07 16:39:16 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
	: _type("General") {
	std::cout << "Default Ctor\n";
}

Animal::Animal(const Animal &other)
	: _type(other._type) {
	std::cout << "Copy Ctor\n";
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Copy Assignment\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Default Dt\n";
}

const std::string Animal::getType(void) const {
	return (this->_type);
}

void Animal::makeSound(void) const {
	std::cout << "Generic Animal sounds :D\n";
}
