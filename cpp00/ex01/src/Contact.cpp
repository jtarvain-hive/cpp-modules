/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 00:19:18 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/14 14:49:29 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string	Contact::get_first_name() const
{
	return (_first_name);
}

std::string	Contact::get_last_name() const
{
	return (_last_name);
}

std::string	Contact::get_nickname() const
{
	return (_nickname);
}

std::string	Contact::get_phone_number() const
{
	return (_phone_number);
}

std::string	Contact::get_secret() const
{
	return (_darkest_secret);
}

void	Contact::set_first_name(const std::string &str)
{
	this->_first_name = str;
}

void	Contact::set_last_name(const std::string &str)
{
	this->_last_name = str;
}

void	Contact::set_nickname(const std::string &str)
{
	this->_nickname = str;
}

void	Contact::set_phone_number(const std::string &str)
{
	this->_phone_number = str;
}

void	Contact::set_secret(const std::string &str)
{
	this->_darkest_secret = str;
}
