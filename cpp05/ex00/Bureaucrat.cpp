/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:40:28 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/08 10:50:21 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <exception>

const char	*Bureaucrat::GradeTooHighException::what() const noexcept  {
	return ("Grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const noexcept  {
	return ("Grade is too low");
}

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade)
	: _name(name), _grade(grade){
	if (this->_grade < 1)
		throw (GradeTooHighException());
	if (this->_grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: _grade(other._grade) {
	if (this->_grade < 1)
		throw (GradeTooHighException());
	if (this->_grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

void Bureaucrat::setGrade(const int grade) {
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
}

const std::string &Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw (GradeTooHighException());
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw (GradeTooLowException());
	else
		this->_grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &a) {
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << ".";
	return (out);
}
