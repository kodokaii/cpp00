/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/18 20:52:14 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


		PhoneBook::PhoneBook()
{
	this->contacts_count = 0;
	this->index = 0;
}

void	PhoneBook::run()
{
	std::string	cmd;

	while (true)
	{
		std::cin >> cmd;
		if (cmd == "ADD")
			this->add();
		else if (cmd == "SEARCH")
			this->search();
		else if (cmd == "EXIT")
			break;
	}
}

void	PhoneBook::add()
{
	this->contacts[this->index].init();
	this->index++;
	if (this->contacts_count < this->index)
		this->contacts_count = this->index;
	if (CONTACT_COUNT <= this->index)
		this->index = 0;
}

void	PhoneBook::search()
{
	t_uint	i;
	
	i = 0;
	while (i < contacts_count)
	{
		std::cout << i << std::setw(10);
		std::cout << '|' << this->contacts[i].get_firstName() << std::endl;
		i++;
	}
}
