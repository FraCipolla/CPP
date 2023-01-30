/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:05 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:10:59 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() : _health(10), _energy(10), _attack(0)
{
	std::cout << "Claptrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap constructor" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

void	ClapTrap::initialize()
{
	std::cout << this->_name << " Health " << _health << std::endl;
	std::cout << this->_name << " Energy " << _energy << std::endl;
	std::cout << this->_name << " Attack " << _attack << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 1)
		return ;
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout <<  this->_attack << " points of damage!" << std::endl;
	std::cout << "Current Energy " << this->_energy << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " recieve " << amount << " of damage" << std::endl;
	this->_health -= amount;
	std::cout << "Current Health " << this->_health << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy < 1)
		return ;
	_energy--;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " of health" << std::endl;
	this->_health += amount;
	std::cout << "Current Health " << this->_health << std::endl;
	std::cout << "Current Energy " << this->_energy << std::endl;
}

std::string	ClapTrap::getName() { return this->_name; };

int	ClapTrap::getAttack() { return this->_attack; };

int	ClapTrap::getEnergy() { return this->_energy; };

int ClapTrap::getHealth() { return this->_health; };