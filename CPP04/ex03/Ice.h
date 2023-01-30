/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:37:24 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 17:35:25 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & ref);
		~Ice();

		Ice & operator=(Ice const & ref);
		
		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target);
	private:
		std::string	_type;
};

#endif