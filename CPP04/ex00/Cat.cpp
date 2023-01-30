/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:40:08 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:11:12 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat costructor" << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	this->_type = cpy.getType();
	std::cout << "Cat Copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}


Cat &Cat::operator=(const Cat & c)
{
	this->_type = c.getType();
	
	return *this;
}