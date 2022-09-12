/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:32:52 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/12 15:03:39 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.h"

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}

void	Contacts::set_firstName(std::string firstName){
	this->_firstName = firstName;
}

void	Contacts::set_lastName(std::string lastName){
	this->_lastName = lastName;
}

void	Contacts::set_nickName(std::string nickName){
	this->_nickName = nickName;
}

void	Contacts::set_phoneNumber(std::string number){
	this->_phoneNumber = number;
}

void	Contacts::set_darkestSecret(std::string secret){
	this->_darkestSecret = secret;
}

std::string Contacts::getFirstName(){
	return this->_firstName;
}

std::string Contacts::getLastName(){
	return this->_lastName;
}

std::string Contacts::getNickName(){
	return this->_nickName;
}

std::string	Contacts::getNumber(){
	return this->_phoneNumber;
}

std::string	Contacts::getSecret(){
	return this->_darkestSecret;
}