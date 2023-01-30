/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:45:38 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:56:45 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int	main()
{
	Animal	*(animal[6]);

	for(int i = 0; i < 6; i++) {
		if (i & 1)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << "\n";
	}
	for (int i = 0; i < 6; i++) {
		delete (animal[i]);
	}
	return 0;
}