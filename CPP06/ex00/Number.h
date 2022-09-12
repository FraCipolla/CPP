/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:24:23 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/13 00:32:00 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_H
#define NUMBER_H

#include <string>
#include <iostream>

class Number
{
private:
	std::string	_in;	
public:
	Number();
	~Number();
	std::string		convertChar(std::string in);
	std::string		convertInt(std::string in);
	std::string		convertFloat(std::string in);
	std::string		convertDouble(std::string in);
};

#endif