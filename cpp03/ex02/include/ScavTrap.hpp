/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 04:09:43 by jtarvain          #+#    #+#             */
/*   Updated: 2026/07/04 17:23:09 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
	void	guardGate();
};
