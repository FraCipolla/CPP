/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:59:30 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 14:46:23 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Costructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	this->_type = cpy._type;
	std::cout << "Animal Copy constructor" << std::endl;
}

void	Animal::makeSound() const
{
}

const std::string	&Animal::getType() const
{
	return this->_type;
}

Animal	&Animal::operator=(const Animal & other)
{
	this->_type = other._type;
	return *this;
}