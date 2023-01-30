/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:43:03 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 10:35:17 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	foo("foo");
	ClapTrap	bar("bar");
	ScavTrap	scav("scav");
	FragTrap	frag("frag");

	foo.initialize(10, 10, 0);
	std::cout << "\n";
	bar.initialize(10, 10, 0);
	std::cout << "\n";
	scav.initialize(100, 50, 20);
	frag.initialize(100, 100, 30);

	foo.attack(bar.getName());
	std::cout << "\n";
	bar.takeDamage(foo.getAttack());
	std::cout << "\n";
	bar.beRepaired(2);
	std::cout << "\n";
		
	scav.attack(foo.getName());
	foo.takeDamage(scav.getAttack());
	std::cout << "\n";

	frag.highFivesGuys();
	std::cout << "\n";
}