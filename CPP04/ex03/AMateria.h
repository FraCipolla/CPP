/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:16:29 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 17:40:01 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.h"

class ICharacter;

class AMateria
{
	protected:
		const std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & ref);
		virtual ~AMateria();

		virtual std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif