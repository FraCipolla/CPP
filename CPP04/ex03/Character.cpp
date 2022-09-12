/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:19:33 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/10 18:39:47 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"


Character::Character(std::string name) : _name(name)
{
	std::cout << "Creating Character " << name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		(this->_slot)[i] = 0;
	}
}

Character::~Character()
{
	std::cout << "Deleting Character " << _name << " and freeing Materia" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (this->_slot[i])
			delete (this->_slot[i]);
	}
}

std::string	const &	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	if (m == NULL)
		return ;
	while (i < 4)
	{
		if ((this->_slot)[i] == 0)
		{
			(this->_slot)[i] = m;
			std::cout << "Equipped " << m->getType() << "in slot " << i << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "Couldn't equip the materia, try to unequip some slot before" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (!_slot[idx])
			std::cout << "There's nothing on that slot" << std::endl;
		if (_slot[idx])
		{
			_slot[idx] = NULL;
			AMateria *ptr = (this->_slot)[idx];
			std::cout << ptr->getType() << " unequipped at slot " << idx << std::endl;
		}
	}
	else
		std::cout << "I don't have that slot!" << std::endl; 
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if ((this->_slot)[idx] != NULL)
		{
			std::cout << "Materia " << (this->_slot)[idx]->getType() << " used on ";
			(this->_slot)[idx]->use(target);
		}
		else{
			std::cout << "There's no Materia in that slot" << std::endl;
		}
	}
}