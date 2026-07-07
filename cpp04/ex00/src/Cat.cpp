/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:17 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/07 16:49:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Cat Default Ctor\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat Copy Ctor\n";
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat Assignment Overload\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Dtor\n";
}

void Cat::makeSound() const {
	std::cout << "Meow\n";
}
