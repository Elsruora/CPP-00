/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:54:03 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/04 15:47:04 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nb_contact(0), _write_on(0)
{
	std::cout<<"contructor called"<<std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout<<"destructor called"<<std::endl;
}

std::string	PhoneBook::get_entry(void)
{
	_buffer = "";
	if (_buffer.empty())
	{
		std::cout<<"waiting for entry (ADD, SEARCH, EXIT):"<<std::endl;
		getline(std::cin, _buffer);
	}
	if (_buffer == "ADD")
		_add_contact();
	if (_buffer == "SEARCH")
		_search_contact();
	return (_buffer);
}

void	PhoneBook::_add_contact()
{
	
	std::cout<<"First name :"<<std::endl;
	_buffer = "";
	while (_buffer.empty())
		getline(std::cin, _buffer);
	_contact[_write_on].set_first_name(_buffer);
	_buffer = "";
	std::cout<<"Last name :"<<std::endl;
	while (_buffer.empty())
		getline(std::cin, _buffer);
	_contact[_write_on].set_last_name(_buffer);
	_buffer = "";
	std::cout<<"Nickname :"<<std::endl;
	while (_buffer.empty())
		getline(std::cin, _buffer);
	_contact[_write_on].set_nickname(_buffer);
	_buffer = "";
	std::cout<<"Phone number :"<<std::endl;
	while (_buffer.empty())
		getline(std::cin, _buffer);
	_contact[_write_on].set_phone_number(_buffer);
	_buffer = "";
	std::cout<<"Darkest secret :"<<std::endl;
	while (_buffer.empty())
		getline(std::cin, _buffer);
	_contact[_write_on].set_darkest_secret(_buffer);
	_buffer = "";
	_contact[_write_on].set_index(_write_on + 1);
	_buffer = "";
	std::cout<<"nb contact : " << _nb_contact << " / 1st contact :" << _contact[0].get_first_name()<< "written on : " <<_write_on<<std::endl;
	if (_nb_contact < 8)
		_nb_contact++;
	if (_write_on == 7)
		_write_on = 0;
	else
		_write_on++;
}

std::string	PhoneBook::_take_contact_word(std::string word)
{
	if (word.size() > 10)
	{
		word.replace(9, word.size(), ".");
	}
	else
	{
		int i = 0;
		std::string	spaces;
		while(i < (10 - (int)word.size()))
		{
			spaces = spaces.append(" ");
			i++;
		}
		word = spaces.append(word);
	}
	return (word);
}

void	PhoneBook::_search_contact()
{
	int	i = 0;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	while (i < _nb_contact)
	{
		std::cout << "         "<< _contact[i].get_index() << "|"<< _take_contact_word(_contact[i].get_first_name())
			<< "|" << _take_contact_word(_contact[i].get_last_name()) << "|" << _take_contact_word(_contact[i].get_nickname()) <<std::endl;
		i++;
	}
}

// void	PhoneBook::_add_contact(std::string contact_name, int contact_pos)
// {
// 	_contacts[contact_pos] = contact_name;
// 	if (_nb_contact < 8)
// 		_nb_contact++;
// }

// std::string	PhoneBook::get_contact(int contact_pos)
// {
// 	return _contacts[contact_pos];
// }

// void	PhoneBook::smart_add(std::string contact_name)
// {
// 	int	i;

// 	i = 8;
// 	if (_nb_contact < 8)
// 		_add_contact(contact_name, _nb_contact);
// 	else
// 	{
// 		_add_contact(contact_name, 0);
// 	}
// }