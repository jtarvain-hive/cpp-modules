/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:17 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/08 02:35:26 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(), _brain(new Brain()) {
	std::cout << "Cat Default Ctor\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain(*other._brain)) {
	std::cout << "Cat Copy Ctor\n";
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat Assignment Overload\n";
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Dt\n";
	delete this->_brain;
}

void Cat::makeSound() const {
	std::cout << "Meow\n";
}
