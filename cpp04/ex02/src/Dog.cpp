/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:18 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/07 18:59:45 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), _brain(new Brain()) {
	std::cout << "Dog Default Ctor\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain(*other._brain)) {
	std::cout << "Dog Copy Ctor\n";
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog Assignment Overload\n";
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Dt\n";
	delete this->_brain;
}

void Dog::makeSound() const {
	std::cout << "Woof\n";
}
