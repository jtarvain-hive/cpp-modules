/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 01:26:06 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/08 01:41:58 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain Default Ctor\n";
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain Copy Ctor\n";
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain Assignment Overload\n";
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Dt\n";
}
