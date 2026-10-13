/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:34:12 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/13 18:45:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: _name("Default"), _target("Default"), _signGrade(72), _execGrade(45) {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: _name

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: _name(other._name), _target(other._target), _signGrade(other._signGrade)
	  , _execGrade(other._execGrade) {
}

