/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:47:55 by ddelladi          #+#    #+#             */
/*   Updated: 2023/02/06 18:47:48 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include "Brain.class.hpp"

class Animal
{
	protected:
		std::string	_type;
		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		virtual 	~Animal();
		Animal&		operator=(Animal const & rhs);
	public:
		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound(void) const;
};

#endif
