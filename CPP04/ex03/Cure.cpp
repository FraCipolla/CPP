/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:26:02 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 17:33:34 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure() : _type("cure")
{
	std::cout << "Cure Costructor" << std::endl;
}

Cure::Cure(const Cure & ref)
{
	this->_type = ref.getType();
	std::cout << "Cure copy Costructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}

Cure & Cure::operator=(Cure const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}

std::string	const & Cure::getType() const
{
	return (this->_type);
}

Cure* Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Cast Cure at " << target.getName() << std::endl;
}

std::string	Cure::getType() { return this->_type; };