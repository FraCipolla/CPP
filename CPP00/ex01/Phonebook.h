/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:19:44 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/12 15:23:21 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contacts.h"

class Phonebook
{
private:
	Contacts	contacts[8];
	int			_index;
public:
	Phonebook();
	~Phonebook();
	void	set_index(int i);
	int		getIndex();
	void	add_contact(Contacts& contact);
	Contacts	getContact(int index);
};

#endif