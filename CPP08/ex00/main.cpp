/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:00:21 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/07 12:00:22 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int	main()
{
	std::list<int>				arr;
	std::vector<int>			arr2;

	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(5);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(10);
	try
	{
		std::cout << *(::easyfind(arr, 5)) << std::endl;
		std::cout << *(::easyfind(arr, 10)) << std::endl;
		std::cout << *(::easyfind(arr, -1)) << std::endl;
	}
	catch (ElementNotFound& e)
	{
		std::cout << e.what() << std::endl;
	}
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(5);
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(10);
	try
	{
		std::cout << *(::easyfind(arr2, 5)) << std::endl;
		std::cout << *(::easyfind(arr2, 10)) << std::endl;
		std::cout << *(::easyfind(arr2, -1)) << std::endl;
	}
	catch (ElementNotFound& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}