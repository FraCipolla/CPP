/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:40:08 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:10:40 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog costructor" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	this->_type = cpy.getType();
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Dog &Dog::operator=(const Dog & c)
{
	this->_type = c.getType();

	return *this;
}