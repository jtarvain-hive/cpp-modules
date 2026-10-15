/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:41:06 by jtarvain          #+#    #+#             */
/*   Updated: 2026/10/15 09:35:00 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int	main(void) {
	// ex00 tests
	std::cout << "--- EX00 TESTS ---"
		<< std::endl;
	try {
		Bureaucrat	a("Axel", 500); // throw grade too low
		std::cout << a << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception caught: "
			<< e.what()
			<< std::endl;
	}
	try {
		Bureaucrat	b("Bart", -300); // throw grade too high
		std::cout << b << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception caught: "
			<< e.what()
			<< std::endl;
	}

	// incrementGrade() tests
	std::cout << "Increment Grade method tests\n";
	try {
		Bureaucrat	c("Chad", 5);
		std::cout << c << std::endl;
		for (int i = 0; i < 1000; ++i) {
			std::cout << "Chad's grade: "
				<< c.getGrade()
				<< std::endl;
			c.incrementGrade();
		}
	} catch (std::exception &e) {
		std::cerr << "Exception caught: "
			<< e.what()
			<< std::endl;
	}
	// decrementGrade() tests
	std::cout << "Increment Grade method tests\n";
	try {
		Bureaucrat	c("Chad", 130);
		std::cout << c << std::endl;
		for (int i = 0; i < 1000; ++i) {
			std::cout << "Chad's grade: "
				<< c.getGrade()
				<< std::endl;
			c.decrementGrade();
		}
	} catch (std::exception &e) {
		std::cerr << "Exception caught: "
			<< e.what()
			<< std::endl;
	}

	// ex01 tests
	std::cout << "--- EX01 TESTS ---"
		<< std::endl;

	try {
		Bureaucrat	a("Alice", 74);
		Form		aform;

		std::cout << a << std::endl;
		std::cout << aform << std::endl;

		// attempt to sign form
		aform.beSigned(a);

		a.decrementGrade();

		// attempt again, this time throws
		aform.beSigned(a);
	} catch (std::exception &e) {
		std::cerr << "Exception caught: "
			<< e.what()
			<< std::endl;
	}

	return (0);
}
