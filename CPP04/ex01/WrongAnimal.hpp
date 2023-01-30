/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:59:01 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:00:35 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>


class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& cpy);
	
	WrongAnimal &operator=(const WrongAnimal & other);

	// member functions
	virtual void	makeSound() const;
	virtual const std::string	&getType() const;
};

#endif