/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:10:18 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/08 02:40:35 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	unsigned int	n = 10;
	unsigned int	i = 0;

	Animal			**arr = new Animal*[n];
	while (i < n) {
		if (i < n / 2)
			arr[i] = new Dog;
		else
			arr[i] = new Cat;
		i++;
	}

	i = 0;
	while (i < n) {
		delete arr[i];
		i++;
	}
	delete[] arr;

	return (0);
}
