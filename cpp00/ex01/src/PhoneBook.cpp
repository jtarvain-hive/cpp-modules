/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 00:19:24 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/17 12:34:38 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->_size = 0;
}

PhoneBook::~PhoneBook() {}

int	PhoneBook::add(void)
{
	Contact		contact;
	std::string	input;

	input = this->get_input("Enter first name: ");
	if (std::cin.fail() || std::cin.eof())
		return (1);
	contact.set_first_name(input);
	input = this->get_input("Enter last name: ");
	if (std::cin.fail() || std::cin.eof())
		return (1);
	contact.set_last_name(input);
	input = this->get_input("Enter nickname: ");
	if (std::cin.fail() || std::cin.eof())
		return (1);
	contact.set_nickname(input);
	input = this->get_input("Enter phone number: ");
	if (std::cin.fail() || std::cin.eof())
		return (1);
	contact.set_phone_number(input);
	input = this->get_input("Enter darkest secret: ");
	if (std::cin.fail() || std::cin.eof())
		return (1);
	contact.set_secret(input);
	this->add_array(contact);
	return (0);
}

std::string	PhoneBook::get_input(const std::string prompt) const
{
	std::string	input;

	std::cout << prompt;
	if (!std::getline(std::cin, input))
	{
		std::cout << std::endl;
		return ("");
	}
	return (input);
}

void	PhoneBook::add_array(Contact contact)
{
	if (this->_size < 8)
	{
		this->_contacts[this->_size] = contact;
		this->_size++;
	}
	else
	{
		this->_contacts[0] = contact;
		this->shift_array();
	}
}

void	PhoneBook::shift_array(void)
{
	Contact	temp;

	temp = _contacts[0];
	for (unsigned int i = 0; i < this->_size - 1; i++)
		this->_contacts[i] = this->_contacts[i + 1];
	this->_contacts[this->_size - 1] = temp;
}

int	PhoneBook::all_digits(std::string str) const
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	PhoneBook::search(void) const
{
	std::string	input;
	int			index;

	index = -1;
	this->print_interface();
	do
	{
		std::cout << std::endl;
		input = get_input("Enter index or '69' to quit: ");
		if (std::cin.eof())
			return (1);
		if (!input.empty() && all_digits(input))
			index = std::stoi(input);
	} while ((index < 0 || index > (int)this->_size - 1)
			&& index != 69);
	if (index == 69)
		return (0);
	this->print_contact(this->_contacts[index]);
	return (0);
}

void	PhoneBook::print_contact(Contact contact) const
{
	std::cout << std::endl;
	std::cout << "CONTACT INFORMATION" << std::endl;
	std::cout << "Name: " << contact.get_first_name() << std::endl;
	std::cout << "Surname: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Their secret: " << contact.get_secret() << std::endl;
}

void	PhoneBook::print_interface(void) const
{
	if (!this->_size)
		std::cout << "Phonebook is empty! ADD new contacts." << std::endl;
	else
		this->print_header();
	for (unsigned int i = 0; i < this->_size; i++)
	{
		std::cout << std::string(9, ' ') << i << "|";
		this->print_field(this->_contacts[i].get_first_name());
		this->print_field(this->_contacts[i].get_last_name());
		this->print_field(this->_contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

void	PhoneBook::print_header(void) const
{
	this->print_field("index");
	this->print_field("name");
	this->print_field("lastname");
	this->print_field("nickname");
	std::cout << std::endl;
}

void	PhoneBook::print_field(const std::string &str) const
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::string(10 - str.length(), ' ') << str << "|";
}
