/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:58:25 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/12 15:25:31 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

void	ft_add(Phonebook* phonebook){
	Contacts c;
	std::string input;

	std::cin.ignore();
	std::cout << "First Name: "; std::getline(std::cin, input); c.set_firstName(input);
	std::cout << "Last Name: "; std::getline(std::cin, input); c.set_lastName(input);
	std::cout << "Nick Name: "; std::getline(std::cin, input); c.set_nickName(input);
	std::cout << "Phone Number: "; std::getline(std::cin, input); c.set_phoneNumber(input);
	std::cout << "Darkest Secret: "; std::getline(std::cin, input); c.set_darkestSecret(input);
	phonebook->add_contact(c);
}

void	ft_search(Phonebook* phonebook){
	int i = 0;
	std::string sep = "         |";

	while (i < phonebook->getIndex())
	{
		for (int c = 0; c < 10; c++)
			std::cout << phonebook->getContact(i).getFirstName()[c];
		i++;
		std::cout << std::endl;
	}
}

int	main()
{
	std::string	input;
	Phonebook phonebook;

	while(1){
		std::cout << "Please, Enter 'ADD', 'SEARCH', 'EXIT'" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			ft_add(&phonebook);
		else if (input == "SEARCH")
			ft_search(&phonebook);
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Wrong command, try again" << std::endl;
	}
}