/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:01:58 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 16:01:58 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <string>
#include "Weapon.hpp"

class	HumanA{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		void	attack(void) const;
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );
		Weapon&	getWeapon( void ) const;
};

#endif