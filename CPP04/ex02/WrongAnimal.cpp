/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:01:23 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:01:35 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Costructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	this->_type = cpy._type;
	std::cout << "WrongAnimal Copy constructor" << std::endl;
}

void	WrongAnimal::makeSound() const
{
}

const std::string	&WrongAnimal::getType() const
{
	return this->_type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal & other)
{
	this->_type = other._type;
	return *this;
}