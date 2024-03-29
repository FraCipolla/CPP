/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:19:42 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 11:18:15 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria()
{
	std::cout << "Abstract materia has beed created\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria Constructor" << std::endl;
}

AMateria::AMateria(AMateria const & ref) : _type(ref._type)
{
	std::cout << "Abstract materia has beed constructed from a copy\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	if (_type == "ice")
		std::cout << "Ice: * shoots an ice bolt at " << target.getName() << std::endl;
	if (_type == "cure")
		std::cout << "Cure: * heals " << target.getName() << "'s wounds *" << std::endl;
}
