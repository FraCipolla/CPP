/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:19:16 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/05 20:19:16 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(Point p1, Point p2, Point p3)
{
	return (abs((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())
		+ p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())
		+ p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())
		) / 2.0));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{

	float	total;
	float	ar = area(a, b, c);
	float	ar_1 = area(point, b, c);
	float	ar_2 = area(point, a, c);
	float	ar_3 = area(point, a, b);

	if (point == a || point == b || point == c)
		return (false);
	total = ar_1 + ar_2 + ar_3;
	return (ar == total);
}