/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:00:18 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 16:30:52 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{
	private:
		AMateria			*(_slot[4]);
		std::string const	_name;
	public:
		Character(std::string name);
		Character(const Character & ref);
		~Character();

		Character & operator=(const Character & ref);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif