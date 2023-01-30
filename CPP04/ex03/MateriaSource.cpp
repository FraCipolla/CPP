/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:59:32 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 17:31:17 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = 0;
	}
	std::cout << "MateriaSource constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & ref)
{
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource	& MateriaSource::operator=(const MateriaSource & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Materia source was destoryed\n";
}

void	MateriaSource::learnMateria(AMateria* mat)
{
	int i = 0;

	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	(this->_inventory)[i] = mat;
	std::cout << "Materia " << mat->getType() << " learned\n";
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->_inventory)[i])->clone());
}