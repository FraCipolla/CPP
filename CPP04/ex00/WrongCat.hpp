/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:09:00 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:10:00 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &cpy);
	~WrongCat();

	WrongCat &operator=(const WrongCat & c);

	// member functions
	void	makeSound() const;
};

#endif