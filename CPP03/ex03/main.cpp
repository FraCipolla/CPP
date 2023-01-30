/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:43:03 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:26:03 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	clap("clap");
	ScavTrap	scav("scav");
	FragTrap	frag("frag");
	DiamondTrap	daia("daia");
	std::cout << "\n";

	clap.initialize();
	std::cout << "\n";
	scav.initialize();
	std::cout << "\n";
	frag.initialize();
	std::cout << "\n";
	daia.initialize();
	std::cout << "\n";

	frag.highFivesGuys();
	std::cout << "\n";

	daia.attack("random trap");
	std::cout << "\n";
	daia.whoAmI();
	std::cout << "\n";
}