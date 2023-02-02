/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:56:52 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 12:56:52 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <exception>
# include <cctype>
# include <map>
// easy find T 
template<typename T>
typename T::iterator easyfind(T &ints, int n)
{
	return (std::find(ints.begin(), ints.end(), n));
}

//overload 
template<typename key_type, typename value_type>
typename std::map<key_type, value_type>::iterator easyfind(std::map<key_type, value_type> &ints, int n)
{
	typename std::map<key_type, value_type>::iterator it = ints.begin();
	for (; it != ints.end(); ++it)
		if (it->second == n)
			return (it);
	return (ints.end());
}

template<typename key_type, typename value_type>
typename std::multimap<key_type, value_type>::iterator easyfind(std::multimap<key_type, value_type> &ints, int n)
{
	typename std::multimap<key_type, value_type>::iterator it = ints.begin();
	for (; it != ints.end(); ++it)
		if (it->second == n)
			return (it);
	return (ints.end());
}

#endif