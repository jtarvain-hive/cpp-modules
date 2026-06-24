/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 01:10:37 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/24 02:02:05 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed &operator=(Fixed const &other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_value;
	static const int	_bit = 8;

};

#endif
