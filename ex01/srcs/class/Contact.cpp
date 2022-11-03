/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:33 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/02 20:03:20 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Contact.hpp"

Contact::Contact(void)
{
	std::cout<<"contructor called"<<std::endl;
}

Contact::~Contact()
{
	std::cout<<"destructor called"<<std::endl;
}

void	Contact::set_first_name(std::string input)
{
	_first_name = input;
	
}

std::string		Contact::get_first_name()
{	
	return _first_name;
}

void	Contact::set_last_name(std::string input)
{
	_last_name = input;
	
}

std::string		Contact::get_last_name()
{	
	return _last_name;
}

void	Contact::set_nickname(std::string input)
{
	_nickname = input;
	
}

std::string		Contact::get_nickname()
{	
	return _nickname;
}

void	Contact::set_phone_number(std::string input)
{
	_phone_number = input;
	
}

std::string		Contact::get_phone_number()
{	
	return _phone_number;
}

void	Contact::set_darkest_secret(std::string input)
{
	_darkest_secret = input;
	
}

std::string		Contact::get_darkest_secret()
{	
	return _darkest_secret;
}

void	Contact::set_index(int	input)
{
	_index = input;
	
}

int		Contact::get_index()
{	
	return _index;
}

// void	Contact::add_contact(std::string input)
// {
// 	std::cout<<"waiting for entry (ADD, SEARCH, EXIT):"<<std::endl;
// 	getline(std::cin, _first_name);
// 	std::cout<<"waiting for entry (ADD, SEARCH, EXIT):"<<std::endl;
// 	getline(std::cin, _buffer);
// 	std::cout<<"waiting for entry (ADD, SEARCH, EXIT):"<<std::endl;
// 	getline(std::cin, _buffer);
// 	std::cout<<"waiting for entry (ADD, SEARCH, EXIT):"<<std::endl;
// 	getline(std::cin, _buffer);
// 	std::cout<<"waiting for entry (ADD, SEARCH, EXIT):"<<std::endl;
// 	getline(std::cin, _buffer);
	
// }