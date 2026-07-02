/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 01:10:36 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/28 01:23:23 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &other) : _value(other._value) {
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int n) : _value(n << _bit) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _bit))) {
	std::cout << "Float constructor called\n";
}

Fixed &Fixed::operator=(Fixed const &other) {
	std::cout << "Copy assignment operator called \n";
	if (this != &other) {
		this->_value = other._value;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &n) {
	out << n.toFloat();
	return (out);
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

float	Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << _bit));
}

int		Fixed::toInt(void) const {
	return (_value >> _bit);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "Function setRawBits called\n";
	this->_value = raw;
}
