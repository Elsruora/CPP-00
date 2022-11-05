/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:36 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/04 15:28:14 by nchabli          ###   ########.fr       */
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
		void		_add_contact();
		void		_search_contact();
		std::string	_take_contact_word(std::string word);
	
	public :
		// void	print_contact_infos(int pos);
		// void	smart_add(std::string name);
		std::string get_entry(void);
};


#endif // MACRO
