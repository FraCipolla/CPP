/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:36:39 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 15:24:37 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
	this->ideas = new std::string[100];
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain & ref)
{
	this->ideas = new std::string[100];
	this->ideas = ref.ideas;
	std::cout << "Brain copy constructor" << std::endl;
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "Brain destructor" << std::endl;
}

Brain &Brain::operator=(Brain const & rhs)
{
	this->ideas = rhs.ideas;
	return *this;
}