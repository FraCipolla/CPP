/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:11 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:08:30 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(), _health(100), _energy(50), _attack(20)
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(), _name(name), _health(100), _energy(50), _attack(20)
{
	std::cout << "ScavTrap constructor" << std::endl; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::initialize()
{
	std::cout << this->_name << " Health " << _health << std::endl;
	std::cout << this->_name << " Energy " << _energy << std::endl;
	std::cout << this->_name << " Attack " << _attack << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy < 1) {
		std::cout << "Not enought energy" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout <<  this->_attack << " points of damage!" << std::endl;
	std::cout << "Current Energy " << this->_energy << std::endl;
}

std::string	ScavTrap::getName() { return this->_name; };

int	ScavTrap::getAttack() { return this->_attack; };

int	ScavTrap::getEnergy() { return this->_energy; };

int ScavTrap::getHealth() { return this->_health; };