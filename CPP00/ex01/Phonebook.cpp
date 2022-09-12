/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:54:29 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/12 15:23:28 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

Phonebook::Phonebook()
{
	_index = 0;
	std::cout << "Phonebook Costructor" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook Destructor" << std::endl;
}

void	Phonebook::set_index(int i){
	this->_index = i;
}

int	Phonebook::getIndex(){
	return this->_index;
}

void	Phonebook::add_contact(Contacts& contact)
{
	if (_index > 7)
		_index = 0;
	this->contacts[_index] = contact;
	_index++;
}

Contacts	Phonebook::getContact(int index){
	return this->contacts[index];
}