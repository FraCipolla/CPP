/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:26:11 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:26:11 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
public:
	FragTrap(std::string name);
	~FragTrap();

	// member functions
	void initialize(int health, int energy, int attack);
	void attack(const std::string& target);
	void highFivesGuys(void);

	int	getAttack();
};

#endif