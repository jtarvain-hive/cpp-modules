/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:20 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/07 19:04:28 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat Default Ctor\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
	std::cout << "WrongCat Copy Ctor\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat Assignment Overload\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Dt\n";
}

void WrongCat::makeSound(void) const {
	std::cout << "Meow (but wrong)\n";
}
