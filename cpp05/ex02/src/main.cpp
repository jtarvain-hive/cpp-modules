/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:41:06 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/08 10:55:49 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void) {
	// Default constructor tests
	try {
		Bureaucrat	a;
		Bureaucrat	b;

		std::cout << a << " and " << b << std::endl;
		a.decrementGrade();
		b.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// String int constructor tests
	try {
		Bureaucrat	a("Alice", 1);
		Bureaucrat	b("Bob", 150);

		a.decrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
