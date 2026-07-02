/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 01:10:36 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/01 15:28:56 by jtarvain         ###   ########.fr       */
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

bool	Fixed::operator<(const Fixed &other) const {
	return (_value < other._value);
}

bool	Fixed::operator>(const Fixed &other) const {
	return (_value > other._value);
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (_value <= other._value);
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (_value >= other._value);
}

bool	Fixed::operator==(const Fixed &other) const {
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other) const {
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const {
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const {
	return (Fixed(toFloat() * other.toFloat()));
}
Fixed	Fixed::operator/(const Fixed &other) const {
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	_value++;
	return (temp);
}

Fixed	&Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);

	_value--;
	return (temp);
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

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}
