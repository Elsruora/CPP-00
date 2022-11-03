/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:38 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/02 20:03:29 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream> //DEBUG

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	int			_index;

public:
	Contact(void);
	~Contact(void);
	
private:
	void	_add_first_name(std::string _last_name);
	void	_add_last_name(std::string _last_name);
	void	_add_nickname(std::string _nickname);
	void	_add_phone_number(std::string _phone_number);
	void	_add_darkest_secret(std::string _darkest_secret);

public:
	void		set_first_name(std::string input);
	std::string	get_first_name();
	void		set_last_name(std::string input);
	std::string	get_last_name();
	void		set_nickname(std::string input);
	std::string	get_nickname();
	void		set_phone_number(std::string input);
	std::string	get_phone_number();
	void		set_darkest_secret(std::string input);
	std::string	get_darkest_secret();
	void		set_index(int input);
	int			get_index();
	
};


#endif // CONTACT_HPP
