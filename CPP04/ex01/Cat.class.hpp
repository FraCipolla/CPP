/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:53:26 by ddelladi          #+#    #+#             */
/*   Updated: 2023/02/06 18:47:24 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include "Animal.class.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();
		Cat&	operator=(Cat const & rhs);
		void	makeSound(void) const;
		void	printBrain(void) const;
		Brain*	getBrain() const;
		void	copyBrain(Brain* b);
};

std::ostream&	operator<<(std::ostream& os, Cat const & c);

#endif
