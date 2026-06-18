/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 22:17:21 by jtarvain          #+#    #+#             */
/*   Updated: 2026/06/17 16:58:49 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact			_contacts[8];
		unsigned int	_size;

		void			shift_array(void);
		void			add_array(Contact contact);
		int				print_interface(void) const;
		void			print_field(const std::string &str) const;
		void			print_header(void) const;
		void			print_contact(Contact contact) const;
		int				all_digits(std::string str) const;

	public:
		PhoneBook();
		~PhoneBook();

		int			add(void);
		int			search(void) const;
		std::string	get_input(const std::string prompt) const;

};

#endif
