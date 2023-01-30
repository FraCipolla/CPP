/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:25:59 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 12:26:00 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;
public:
	FragTrap(std::string name);
	// FragTrap(FragTrap const&);
	FragTrap();
	~FragTrap();

	// get
	std::string	getName();
	int	getAttack();
	int	getEnergy();
	int	getHealth();

	// member functions
	void initialize();
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif