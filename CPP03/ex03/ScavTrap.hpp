/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:15 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:07:00 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	// get
	std::string	getName();
	int	getAttack();
	int	getEnergy();
	int	getHealth();
	
	// member functions
	void initialize();
	void attack(const std::string& target);
	void guardGate();
};

#endif