/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:13:43 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/15 09:07:07 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

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
	Form(const std::string &name, int signGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	const std::string	&getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;

	void	beSigned(const Bureaucrat &a);
	
private:
	const std::string	_name;
	bool				_signed = false;
	const int			_signGrade;
	const int			_execGrade;

};

std::ostream &operator<<(std::ostream &out, const Form &a);
