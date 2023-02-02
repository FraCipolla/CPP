/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:01:40 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 16:01:40 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>

class	Weapon{
	private:
		std::string	type;
	
	public:
		Weapon( std::string type );
		~Weapon( void );

		const std::string&	getType(void) const;
		bool		setType( const std::string& newType );
};

#endif