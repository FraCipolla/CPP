/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:25:54 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:25:55 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();

	// member functions
	void initialize();
	void attack(const std::string& target);
	void whoAmI();
};

#endif