/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:01:56 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 16:01:56 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon){
}

HumanA::~HumanA( void ){
}

void	HumanA::attack(void) const{
	std::cout << name << "attacks with their " << weapon.getType();
	std::cout << std::endl;
}

Weapon&	HumanA::getWeapon( void ) const{
	return (weapon);
}