/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:37:51 by mcipolla          #+#    #+#             */
/*   Updated: 2022/10/07 19:14:57 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <iostream>

class Dog : public Animal
{
private:
	
public:
	Dog();
	~Dog();
	void	makeSound() const;
};

#endif