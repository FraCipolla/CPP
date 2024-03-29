/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:53:51 by ddelladi          #+#    #+#             */
/*   Updated: 2023/02/06 18:48:05 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include "Animal.class.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(Dog const & src);
		virtual ~Dog();
		Dog&	operator=(Dog const & rhs);
		void	printBrain(void) const;
		Brain*	getBrain() const;
		void	copyBrain(Brain* b);
		void	makeSound(void) const;
};

#endif
