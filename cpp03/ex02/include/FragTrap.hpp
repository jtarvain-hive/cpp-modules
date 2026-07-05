/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 22:51:54 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/04 23:28:25 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>

class	FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	void	highFivesGuys(void);
};
