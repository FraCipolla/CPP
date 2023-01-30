/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:45:38 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 14:59:48 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal	*(animal[6]);

	delete j;//should not create a leak
	delete i;
	
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