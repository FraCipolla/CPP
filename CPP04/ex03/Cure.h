/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:24:29 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 17:33:31 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure : public AMateria
{
	private:
		std::string	_type;
	public:
		Cure();
		Cure(const Cure & ref);
		~Cure();

		Cure & operator=(const Cure & ref);

		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);
		std::string	getType();
};

#endif