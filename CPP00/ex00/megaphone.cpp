/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:58:15 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/12 12:16:52 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int c = 1; argv[c]; c++)
		{
			for(int i = 0; argv[c][i]; i++)
			{
				std::cout << (char)toupper(argv[c][i]);
			}
		}
		std::cout << std::endl;
	}
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}