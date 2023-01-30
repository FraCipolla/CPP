/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:40:08 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 14:45:34 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat costructor" << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	this->_type = cpy.getType();
	this->_brain = cpy.getBrain();
	std::cout << "Cat Copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete(_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain	*Cat::getBrain() const { return this->_brain; };

Cat &Cat::operator=(const Cat & c)
{
	this->_type = c.getType();
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(c.getBrain()));
	return *this;
}