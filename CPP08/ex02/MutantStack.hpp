/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:00:35 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/07 12:00:35 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>();
		MutantStack<T>(MutantStack const & src);
		MutantStack&	operator=(MutantStack const & rhs);
		~MutantStack();
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin();
		iterator	end();
};

#include "MutantStack.tpp"
