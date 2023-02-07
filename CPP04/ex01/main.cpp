/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:31:44 by ddelladi          #+#    #+#             */
/*   Updated: 2023/02/06 18:47:34 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"

int	main()
{
	Animal	*arr[50];
	Dog		original;
	original.getBrain()->setIdea("prova", 10);
	Dog		copy(original);
	int		i;

	i = -1;
	while (++i < 50)
	{
		if (!(i % 2))
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	std::cout << "This is the original brain: " << std::endl;
	original.printBrain();
	std::cout << "This is the copy brain: " << std::endl;
	copy.printBrain();
	i = -1;
	while (++i < 50)
		delete arr[i];
	return (0);
}