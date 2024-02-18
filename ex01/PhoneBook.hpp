/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/18 20:49:40 by nlaerema         ###   ########.fr       */
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
		Contact		contacts[CONTACT_COUNT];
		t_uint		contacts_count;
		t_uint		index;
	public:
				PhoneBook();
		void	run();
		void	add();
		void	search();
		void	exit();
};

#endif
