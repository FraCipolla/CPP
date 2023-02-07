/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:00:29 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/07 12:07:32 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const & N)
:
	_max_values(N)
{}

Span::Span(const Span& copy)
:
	_max_values(copy._max_values),
	_values(copy._max_values)
{}

Span::~Span() {}

Span & Span::operator=(const Span& op)
{
	if (this == &op)
		return (*this);
	this->_max_values = op._max_values;
	this->_values = op._values;
	return (*this);
}

void        Span::addNumber(int n)
{
	if (this->_values.size() < (unsigned long)this->_max_values)
		this->_values.push_back(n);
	else
		throw Span::Full();
	std::sort(this->_values.begin(), this->_values.end());
}

long		Span::shortestSpan(void)
{
	if(this->_values.size() <= 1)
		throw Span::CantSpan();

	long shortest = (long)this->_values[1] - (long)this->_values[0];
	size_t value_size = this->_values.size();

	for (size_t i = 0; i < value_size - 1; i++)
		if ((long)this->_values[i + 1] - (long)this->_values[i] < shortest)
			shortest = (long)this->_values[i + 1] - (long)this->_values[i];
	return ((unsigned long)shortest);
}

long		Span::longestSpan(void)
{
	if(this->_values.size() <= 1)
		throw Span::CantSpan();
	
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min = std::min_element(this->_values.begin(), this->_values.end());
	max = std::max_element(this->_values.begin(), this->_values.end());

	long rtn = (long)(*min) - (long)(*max);

	return ((rtn < 0) ? (rtn * -1) : rtn);
}
