/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:59:46 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 15:59:46 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <vector>

class	Zombie{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);

		void	announce( void ) const;
		std::string	getName( void ) const;
		void		setName( std::string newName );
};

Zombie* zombieHorde( int N, std::string name );

#endif