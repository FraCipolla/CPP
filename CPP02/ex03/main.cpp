/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:21:46 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/05 20:21:47 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(int argc, char **argv)
{
	Point		a(0, 2);
	Point		b(3, 0);
	Point		c(3, 2);
	Point const	d(2, 1);

	std::cout << bsp(a, b, c, d) << std::endl;

	Point const	e(2, 0);

	std::cout << bsp(a, b, c, e) << std::endl;

	Point const	f(0, 2);

	std::cout << bsp(a, b, c, f) << std::endl;

	return (0);
}