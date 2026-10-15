/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:13:45 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/15 09:12:36 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"


const char	*Form::GradeTooHighException::what() const noexcept {
	return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const noexcept {
	return ("Grade is too low");
}

Form::Form() : _name("Aform"), _signed(false), _signGrade(74), _execGrade(50) {
}

Form::Form(const std::string &name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
}

Form::Form(const Form &other) : _name("Aform"), _signed(other._signed),
	_signGrade(other._signGrade), _execGrade(other._execGrade) {
}

Form &Form::operator=(const Form &other) {
	if (this != &other) {
		this->_signed = other._signed;
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

int Form::getSignGrade() const {
	return (_signGrade);
}

int Form::getExecGrade() const {
	return (_execGrade);
}

void Form::beSigned(const Bureaucrat &a) {
	if (a.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	else {
		this->_signed = true;
		std::cout << "Bureaucrat " << a.getName() << " signed " << "Form " << this->_name
			<< std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Form &a) {
	out << "Form: " << a.getName() << ", Signed: " << a.getSigned()
		<< ", Sign Grade: " << a.getSignGrade() << ", Execution Grade: " << a.getExecGrade();
	return (out);
}
