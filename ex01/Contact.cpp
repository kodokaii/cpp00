/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/18 19:59:01 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void			Contact::init()
{
	kdo::get_userInput<std::string>("first name: ", this->firstName);
	kdo::get_userInput<std::string>("last name: ", this->lastName);
	kdo::get_userInput<std::string>("nickname: ", this->nickname);
	kdo::get_userInput<std::string>("phone number: ", this->phoneNumber);
	kdo::get_userInput<std::string>("darkest secret: ", this->darkestSecret);
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
