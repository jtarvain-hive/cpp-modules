/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:13:43 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/12 15:30:30 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
public:
	class	GradeTooHighException : public std::exception {
	public:
		const char	*what() const noexcept override;
	};

	class	GradeTooLowException : public std::exception {
	public:
		const char	*what() const noexcept override;
	};

	AForm();
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	~AForm();

	const std::string	&getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;

	void	beSigned(const Bureaucrat &a);
	
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

};

std::ostream &operator<<(std::ostream &out, const AForm &a);
