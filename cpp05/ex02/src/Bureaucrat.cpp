/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:40:28 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/14 18:41:05 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
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
	if (_grade < 1)
		throw (GradeTooHighException());
	if (_grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: _grade(other._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

const std::string &Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cerr << this->_name << " couldn't sign " << form.getName() << " because "
			<< e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw (GradeTooHighException());
	else
		_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw (GradeTooLowException());
	else
		_grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &a) {
	out << a.getName() << ", Bureaucrat Grade: " << a.getGrade() << ".";
	return (out);
}
