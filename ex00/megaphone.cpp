/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/18 13:15:52 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>

void	putstr_upper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		std::cout << (char)toupper(str[i++]);
}

int main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < argc)
			putstr_upper(argv[i++]);
	}
	std::cout << std::endl;
	return (0);
}
