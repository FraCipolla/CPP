/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:42:56 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/10 18:57:02 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"

Ice::Ice() : _type("ice")
{
	std::cout << "Ice Costructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;
}

Ice::Ice(Ice const & ref) : _type(ref.getType())
{
	std::cout << this->_type << " constructed from copy\n";
}

Ice & Ice::operator=(Ice const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}

std::string	const & Ice::getType() const
{
	return (this->_type);
}

AMateria* Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}