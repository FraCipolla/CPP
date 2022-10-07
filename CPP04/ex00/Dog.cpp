/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:40:08 by mcipolla          #+#    #+#             */
/*   Updated: 2022/10/07 17:43:19 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(std::string type): _type(type)
{
	std::cout << "Dog costructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound()
{
	if (this->_type == "Dog")
		std::cout << "Woof Woof" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Meow Meow" << std::endl;
	else
		std::cout << "I don't have any sound for that Animal!" << std::endl;
}