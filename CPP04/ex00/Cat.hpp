/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:37:51 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:10:52 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(const Cat &cpy);
	~Cat();

	Cat &operator=(const Cat & c);

	// member functions
	void	makeSound() const;
};

#endif