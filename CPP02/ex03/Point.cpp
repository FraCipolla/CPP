/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:21:50 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/05 20:21:50 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::Point(float const x, float const y) : _x(x), _y(y)
{}

Point::Point(Point const & src)
{
	*this = src;
}

Point&	Point::operator=(Point const & rhs)
{
	if (this != &rhs)
		return (*new(this) Point(rhs._x.toFloat(), rhs._y.toFloat()));
	else
		return (*this);
}

Point::~Point(void)
{}

bool	Point::operator==(Point const & rhs) const
{
	if (this->_x.toFloat() == rhs._x.toFloat()
		&& this->_y.toFloat() == rhs._y.toFloat())
		return (true);
	return (false);
}

Fixed	Point::getX(void)
{
	return (this->_x);
}

Fixed	Point::getY(void)
{
	return (this->_y);
}