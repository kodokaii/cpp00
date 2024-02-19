/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/19 23:09:39 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string     PhoneBook::resume_string(std::string str) const
{
	size_t	length;

	length = str.length();
	if (length <= 10)
		str.insert(0, 10 - length, ' ');
	else
	{
		str.erase(9);
		str.push_back('.');
	}
	return (str);
}

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
		kdo::userinput("$> ", cmd);
		cmd = kdo::strtrim(cmd, " \n\r\t\f\v");
		if (cmd == "ADD")
			this->add();
		else if (cmd == "SEARCH")
			this->search();
		else if (cmd == "EXIT")
			break;
		else if (!cmd.empty())
			std::cerr << "command not found: " << cmd << std::endl;
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

void	PhoneBook::search() const
{
	t_uint	i;
	
	i = 0;
	while (i < this->contacts_count)
	{
		std::cout << std::setw(10) << i << '|';
		std::cout << PhoneBook::resume_string(this->contacts[i].get_firstName()) << '|';
		std::cout << PhoneBook::resume_string(this->contacts[i].get_lastName())  << '|';
		std::cout << PhoneBook::resume_string(this->contacts[i].get_nickname())  << '|';
		std::cout << std::endl;
		i++;
	}
	while (true)
	{
		if (kdo::userinput("index : ", i))
			std::cerr << "Invalid index !" << std::endl;
		else if (this->contacts_count <= i)
			std::cerr << "Index out of range !" << std::endl;
		else
			break ;
	}
	std::cout << this->contacts[i];
}
