/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:02:57 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 23:02:58 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default_name"), _grade(150)
{
	std::cout << "Default constructor called on Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Constructor called on Bureaucrat" << std::endl;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Copy constructor called on Bureaucrat" << std::endl;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Copy assignment operator called on Bureaucrat" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_grade = rhs.getGrade();
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called on Bureaucrat " << this->getName() << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade(int amount)
{
	for (int i = 0; i < amount; i++)
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
	}
}

void		Bureaucrat::decrementGrade(int amount)
{
	for (int i = 0; i < amount; i++)
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
	}
}

std::ostream&	operator<<(std::ostream & os, Bureaucrat const & b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".\n";
	return (os);
}
