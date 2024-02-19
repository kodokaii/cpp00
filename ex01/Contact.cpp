/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/19 23:45:14 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_field(const std::string &prompt)
{
	std::string	field;

	while (field.empty())
		kdo::userinput(prompt, field);
	return (field);
}

void			Contact::init()
{
	this->firstName = Contact::get_field("first name: ");
	this->lastName = Contact::get_field("last name: ");
	this->nickname = Contact::get_field("nickname: ");
	this->phoneNumber = Contact::get_field("phone number: ");
	this->darkestSecret = Contact::get_field("darkest secret: ");
}

void			Contact::print(std::ostream &stream) const
{
	stream << "first name: " << this->firstName << std::endl;
	stream << "last name: " << this->lastName << std::endl;
	stream << "nickname: " << this->nickname << std::endl;
	stream << "phone number: " << this->phoneNumber << std::endl;
	stream << "darkest secret: " << this->darkestSecret << std::endl;
}

std::string		Contact::get_firstName() const
{
	return (this->firstName);
}

std::string		Contact::get_lastName() const
{
	return (this->lastName);
}

std::string		Contact::get_nickname() const
{
	return (this->nickname);
}


std::ostream	&operator<<(std::ostream &stream, Contact const& contact) {
	contact.print(stream);
	return (stream);
}
