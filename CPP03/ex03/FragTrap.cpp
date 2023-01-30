/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:11 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:07:59 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap(), _health(100), _energy(100), _attack(30)
{
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(), _name(name), _health(100), _energy(100), _attack(30)
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

void	FragTrap::initialize()
{
	std::cout << this->_name << " Health " << _health << std::endl;
	std::cout << this->_name << " Energy " << _energy << std::endl;
	std::cout << this->_name << " Attack " << _attack << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy < 1) {
		std::cout << "Not enought energy" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout <<  this->_attack << " points of damage!" << std::endl;
	std::cout << "Current Energy " << this->_energy << std::endl;
}

int	FragTrap::getAttack() { return this->_attack; };

std::string	FragTrap::getName() { return this->_name; };

int	FragTrap::getEnergy() { return this->_energy; };

int FragTrap::getHealth() { return this->_health; };