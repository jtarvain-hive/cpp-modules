/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:13:45 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/15 10:43:15 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char	*AForm::GradeTooHighException::what() const noexcept {
	return ("Grade is too high");
}

const char	*AForm::GradeTooLowException::what() const noexcept {
	return ("Grade is too low");
}

const char	*AForm::FormNotSignedException::what() const noexcept {
	return ("Form is not signed");
}

AForm::AForm() : _name("Aform"), _signed(false), _signGrade(74), _execGrade(50) {
}

AForm::AForm(const std::string &name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
}

AForm::AForm(const AForm &other) : _name("Aform"), _signed(other._signed),
	_signGrade(other._signGrade), _execGrade(other._execGrade) {
}

AForm &AForm::operator=(const AForm &other) {
	if (this != &other) {
		this->_signed = other._signed;
	}
	return (*this);
}

AForm::~AForm() {}

const std::string &AForm::getName() const {
	return (_name);
}

bool AForm::getSigned() const {
	return (_signed);
}

int AForm::getSignGrade() const {
	return (_signGrade);
}

int AForm::getExecGrade() const {
	return (_execGrade);
}

void AForm::beSigned(const Bureaucrat &a) {
	if (a.getGrade() > this->_signGrade)
		throw (AForm::GradeTooLowException());
	else {
		this->_signed = true;
		std::cout << "Bureaucrat " << a.getName() << " signed " << "AForm " << this->_name
			<< std::endl;
	}
}

void AForm::execute(const Bureaucrat &executor) const {
	if (!this->_signed)
		throw (FormNotSignedException());
	if (executor.getGrade() >= this->getExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	action();
}

std::ostream &operator<<(std::ostream &out, const AForm &a) {
	out << "AForm: " << a.getName() << ", Signed: " << a.getSigned()
		<< ", Sign Grade: " << a.getSignGrade() << ", Execution Grade: " << a.getExecGrade();
	return (out);
}
