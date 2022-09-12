/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:26:02 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/10 18:26:14 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure() : _type("cure")
{
	std::cout << "Cure Costructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}

std::string	const & Cure::getType() const
{
	return (this->_type);
}

AMateria* Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Cast Cure at " << target.getName() << std::endl;
}