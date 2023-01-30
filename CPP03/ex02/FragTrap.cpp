/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:11 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 10:31:34 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	std::cout << "FragTrap constructor" << std::endl; 
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "This is a poisitive high five request on STDOUT (whatever it means)" << std::endl;
}

void	FragTrap::initialize(int health, int energy, int attack)
{
	std::cout << this->_name << " setting health to " << health << std::endl;
	std::cout << this->_name << " setting energy to " << energy << std::endl;
	std::cout << this->_name << " setting attack to " << attack << std::endl;
	this->_health = health;
	this->_energy = energy;
	this->_attack = attack;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy < 1)
		return ;
	this->_energy--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout <<  this->_attack << " points of damage!" << std::endl;
	std::cout << "Current Energy " << this->_energy << std::endl;
}

int	FragTrap::getAttack() { return this->_attack; };