/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:13:43 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/09 13:29:33 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
public:
	class	GradeTooHighException : public std::exception {
	public:
		const char	*what() const noexcept override;
	};

	class	GradeTooLowException : public std::exception {
	public:
		const char	*what() const noexcept override;
	};

	Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	const std::string	&getName() const;
	bool				getSigned() const;
	const int			getSignGrade() const;
	const int			getExecGrade() const;

	void	beSigned(const Bureaucrat &a) const;
	
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

};

std::ostream &operator<<(std::ostream &out, const Form &a);
