/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:40:08 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 14:45:44 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog costructor" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	this->_type = cpy.getType();
	this->_brain = cpy.getBrain();
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete(_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Brain	*Dog::getBrain() const { return this->_brain; };

Dog &Dog::operator=(const Dog & c)
{
	this->_type = c.getType();
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(c.getBrain()));
	return *this;
}