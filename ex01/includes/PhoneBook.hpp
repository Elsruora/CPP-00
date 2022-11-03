/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:36 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/03 14:54:48 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact		_contact[8];
		int			_nb_contact;
		int			_write_on;
	
	public :
		std::string	_buffer;
		PhoneBook(void);
		~PhoneBook(void);
		
	private :
		void	_add_contact();
	
	public :
		// void	print_contact_infos(int pos);
		// void	smart_add(std::string name);
		std::string get_entry(void);
};


#endif // MACRO
