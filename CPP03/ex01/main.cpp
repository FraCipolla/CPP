/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:43:03 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 10:34:22 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	foo("foo");
	ClapTrap	bar("bar");
	ScavTrap	scav("scav");
	

	foo.initialize(10, 10, 0);
	std::cout << "\n";
	bar.initialize(10, 10, 0);
	std::cout << "\n";
	scav.initialize(100, 50, 20);

	while (foo.getEnergy() || bar.getEnergy()){
		foo.attack(bar.getName());
		std::cout << "\n";
		bar.takeDamage(foo.getAttack());
		std::cout << "\n";
		bar.beRepaired(2);
		std::cout << "\n";
	}
	scav.attack(foo.getName());
	foo.takeDamage(scav.getAttack());
}