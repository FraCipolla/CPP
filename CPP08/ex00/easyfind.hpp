/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:00:19 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/07 12:00:19 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <algorithm>
# include <iostream>

class ElementNotFound : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Element not found");
		}
};

template <typename T>
typename T::iterator	easyfind(T cont, int val)
{
	typename T::iterator	iter;
	iter = std::find(cont.begin(), cont.end(), val);
	if (iter == cont.end())
		throw ElementNotFound();
	return (iter);
}

#endif
