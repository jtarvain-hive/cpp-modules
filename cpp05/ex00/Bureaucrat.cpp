/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:40:28 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/06 23:45:31 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <string>
#include <iostream>
#include <exception>

Bureaucrat::Bureaucrat() {
	std::cout << "Default Constructor" << std::endl;
}
Bureaucrat::Bureaucrat(const int grade) {
	if (grade < 0 || grade > 15)
		throw
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: _name(other._name), _grade(other._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor" << std::endl;
}

void Bureaucrat::setName(const std::string &name) {
	this->_name = name;
}

void Bureaucrat::setGrade(const int grade) {
	if (grade < 0 || grade > 150)
		throw
}

void Bureaucrat::incrementGrade() {
	if (this->_grade + 1 > 150)
		throw(std::exception e);
	else
		this->_grade++;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade - 1 < 0)
		throw(std::exception)
	else
		this->_grade--;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &a);
