/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:18:15 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 12:18:15 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class Contacts{
	private:
    int n_contacts;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	Phone;
	std::string	Secret;

	public:

	// Set
    void		increase_contact_n();
	void		setFirstName(std::string& str);
	void		setLastName(std::string& str);
	void		setNickName(std::string& str);
	void		setPhone(std::string& str);
	void		setSecret(std::string& str);

	// Get
    int get_n_contcts();
	std::string	get_FirstName();
	std::string	get_LastName();
	std::string	get_Nickname();
	std::string get_Phone();
	std::string get_Secret();
};

#endif