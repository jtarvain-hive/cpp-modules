/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 01:10:37 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/28 01:23:29 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(const int n);
	Fixed(const float f);
	Fixed &operator=(Fixed const &other);
	~Fixed();

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					_value;
	static const int	_bit = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &n);

#endif
