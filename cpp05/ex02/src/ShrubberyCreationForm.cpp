/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:34:13 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/13 18:45:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: _name("Default"), _target("Default"), _signGrade(145), _execGrade(137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: _name("Default"),  {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: _name(other._name), _target(other._target),_signGrade(other._signGrade), _execGrade(other.execGrade) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		_target = other._target;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


