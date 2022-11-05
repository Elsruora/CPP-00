/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:38 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/05 20:10:25 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream> //DEBUG

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	Contact(void);
	~Contact(void);
	
private:

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
	
};


#endif // CONTACT_HPP
