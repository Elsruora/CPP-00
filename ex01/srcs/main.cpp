/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchabli <nchabli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:56:48 by nchabli           #+#    #+#             */
/*   Updated: 2022/11/02 19:00:02 by nchabli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	
	std::string input;

	while (input != "EXIT")
	{
		input = phoneBook.get_entry();
	}
	return 0;
}
