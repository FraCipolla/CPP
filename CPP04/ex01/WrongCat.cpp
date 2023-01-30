/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:11:43 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:14:18 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat costructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	this->_type = cpy.getType();
	std::cout << "WrongCat Copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Pio Pio" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat & c)
{
	this->_type = c.getType();
	
	return *this;
}