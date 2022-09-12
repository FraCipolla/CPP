/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:21:29 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/12 15:03:35 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
#include <iostream>

class Contacts
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	Contacts();
	~Contacts();
	void	set_firstName(std::string firsName);
	void	set_lastName(std::string lastName);
	void	set_nickName(std::string nickName);
	void	set_phoneNumber(std::string number);
	void	set_darkestSecret(std::string secret);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getSecret();
	std::string	getNumber();
};

#endif