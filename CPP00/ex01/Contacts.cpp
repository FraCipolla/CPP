/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:40:17 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 16:49:29 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

 void    Contacts::increase_contact_n()
 {
    if (n_contacts < 8)
        n_contacts += 1;
	if (n_contacts == 8)
		n_contacts = 0;
}
void		Contacts::setFirstName(std::string& str)
{
	FirstName = str;
}
void		Contacts::setLastName(std::string& str)
{
	LastName = str;
}
void		Contacts::setNickName(std::string& str)
{
	Nickname = str;
}
void		Contacts::setPhone(std::string& str)
{
	Phone = str;
}
void		Contacts::setSecret(std::string& str)
{
	Secret = str;
}

// Get
int Contacts::get_n_contcts() { return (n_contacts); }
std::string	Contacts::get_FirstName() { return (FirstName); }
std::string	Contacts::get_LastName() { return (LastName); }
std::string	Contacts::get_Nickname() { return (Nickname); }
std::string Contacts::get_Phone() { return (Phone); }
std::string Contacts::get_Secret() { return (Secret); }