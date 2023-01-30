/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:40:39 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:25:11 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	_name = name;
	std::cout << "DiamondTrap constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}

void	DiamondTrap::initialize ()
{
	_health = FragTrap::getHealth();
	_energy = ScavTrap::getEnergy();
	_attack = FragTrap::getAttack();
	std::cout << this->_name << " Health " << _health << std::endl;
	std::cout << this->_name << " Energy " << _energy << std::endl;
	std::cout << this->_name << " Attack " << _attack << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	FragTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}