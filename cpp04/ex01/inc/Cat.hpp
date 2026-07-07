/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:16:19 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/08 01:57:41 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat	:	public Animal {
public:
	Cat();
	Cat(const Cat &other);
	Cat&operator=(const Cat &other);
	~Cat();

	void	makeSound() const override;

private:
	Brain	*_brain;
};
