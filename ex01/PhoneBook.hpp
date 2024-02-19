/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/19 13:11:50 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
# include "kdolib/kdolib.hpp"

# define CONTACT_COUNT	8

class PhoneBook
{
	private:
		Contact			contacts[CONTACT_COUNT];
		t_uint			contacts_count;
		t_uint			index;

		std::string		resume_string(std::string str) const;

	public:
						PhoneBook();
		void			run();
		void			add();
		void			search() const;
};

#endif
