/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:34:12 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:00:45 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>


class Animal
{
protected:
	std::string	_type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& cpy);
	
	Animal &operator=(const Animal & other);

	// member functions
	virtual void	makeSound() const;
	virtual const std::string	&getType() const;
};

#endif