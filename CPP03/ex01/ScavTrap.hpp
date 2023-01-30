/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:01:15 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 10:44:02 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
public:
	ScavTrap(std::string name);
	~ScavTrap();

	// member functions
	void initialize(int health, int energy, int attack);
	void attack(const std::string& target);
	void guardGate();

	int	getAttack();
};

#endif