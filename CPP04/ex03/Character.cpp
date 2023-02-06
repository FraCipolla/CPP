/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:19:33 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 12:27:10 by mcipolla         ###   ########.fr       */
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
	for (int i = 0; i < 10; i++)
	{
		(this->_drop)[i] = 0;
	}
}

Character::Character(const Character & ref) : _name(ref.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		// Deep copy!
		if ((ref._slot)[i])
			(this->_slot)[i] = (ref._slot[i])->clone();
	}
	std::cout << "A character named " << _name << " was created from copy of " << ref._name << "\n";
}

Character::~Character()
{
	std::cout << "Deleting Character " << _name << " and freeing Materia" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i])
			delete (this->_slot[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (this->_drop[i])
			delete (this->_drop[i]);
	}
}

Character & Character::operator=(Character const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_slot[i])
			delete this->_slot[i];
		if (ref._slot[i])
			this->_slot[i] = (ref._slot[i])->clone();
	}
	return (*this);
}

std::string	const &	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	if (!m)
		return ;
	while ((this->_slot)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " can't equip more than 4 Materia";
		return ;
	}
	(this->_slot)[i] = m;
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
			int i = 0;
			while (_drop[i] != 0)
				i++;
			if (i == 10) {
				std::cout << "Can't drop more Materia, the floor is full!" << std::endl;
				return ;
			}
			_drop[i] = _slot[idx];
			_slot[idx] = NULL;
			std::cout << _drop[i]->getType() << " unequipped at slot " << idx << std::endl;
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
			(this->_slot)[idx]->use(target);
		} else {
			std::cout << "There's no Materia in that slot" << std::endl;
		}
	}
}