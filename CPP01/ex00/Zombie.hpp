/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:53:15 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 15:53:15 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		void	announce( void ) const;
		std::string	getname(void) const;
		~Zombie(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
	
#endif