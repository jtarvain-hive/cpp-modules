/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:31:25 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/06 23:49:35 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class	Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	void	setName(const std::string &name);
	void	setGrade(const int);

	const std::string	getName();
	const int			getGrade();

	void	incrementGrade();
	void	decrementGrade();

private:
	const std::string	_name;
	int					_grade;
};
	// overload << to print to stdout <name>, bureaucrat grade <grade>
std::ostream &operator<<(std::ostream &out, const Bureaucrat &a);
