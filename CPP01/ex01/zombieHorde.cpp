/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:59:42 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 15:59:42 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde = new Zombie[N];
	
	for (int i = 0; i < N; i++){
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
	}
	return (zombieHorde);
}