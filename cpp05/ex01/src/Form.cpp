/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:13:45 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/09 13:28:12 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"

class	Bureaucrat;

const char	*Form::GradeTooHighException::what() const noexcept {
	return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const noexcept {
	return ("Grade is too low");
}

Form::Form() : _name("Aform"), _signed(false), _signGrade(74), _execGrade(50) {
}

Form::Form(const Form &other) : _name("Aform"), _signed(other._signed),
	_signGrade(other._signGrade), _execGrade(other._execGrade) {
}

Form &Form::operator=(const Form &other) {
	if (this != &other) {
		this->_signed = other._signed;
		this->_signGrade = other._signGrade;
		this->_execGrade = other._execGrade;
	}
	return (*this);
}

Form::~Form() {
}

const std::string &Form::getName() const {
	return (_name);
}

bool Form::getSigned() const {
	return (_signed);
}

const int Form::getSignGrade() const {
	return (_signGrade);
}

const int Form::getExecGrade() const {
	return (_execGrade);
}

void Form::beSigned(const Bureaucrat &a) const {
	if (a._grade > this->_signGrade)
		throw (Form::GradeTooLowException());
	else {
		this->_signed = true;
		std::cout << "Bureaucrat " << a._name << " signed " << "Form " << this->_name
			<< std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Form &a) {
	out << "Form: " << a.getName() << ", Signed: " << a._getSigned()
		<< ", Sign Grade: " << a.getSignGrade() << ", Execution Grade: " << a.getExecGrade()
	return (out);
}
