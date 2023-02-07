/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:04:07 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 23:04:08 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("no_name"), _signed(false), _minGradeToSign(150), _minGradeToExecute(150)
{
	std::cout << "Default constructor called on AForm" << std::endl;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(std::string name, int minGradeToSign, int minGradeToExecute)
	: _name(name), _signed(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
	std::cout << "Constructor called on AForm" << std::endl;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(AForm const & src) : _name(src.getName()), _signed(false), _minGradeToSign(src.getMinGradeToSign()), _minGradeToExecute(src.getMinGradeToExecute())
{
	std::cout << "Copy constructor called on AForm" << std::endl;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (AForm::GradeTooHighException());
}

AForm&	AForm::operator=(AForm const & rhs)
{
	std::cout << "Copy assignment operator called on AForm" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_signed = false;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (AForm::GradeTooHighException());
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor called on AForm" << std::endl;
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getStatus() const
{
	return (this->_signed);
}

int	AForm::getMinGradeToSign() const
{
	return (this->_minGradeToSign);
}

int	AForm::getMinGradeToExecute() const
{
	return (this->_minGradeToExecute);
}

void	AForm::beSigned(Bureaucrat const & b)
{
	if (this->_signed == true)
		throw (AForm::AlreadySignedException());
	else if (b.getGrade() <= this->_minGradeToSign)
		this->_signed = true;
	else
		throw (AForm::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream & os, AForm const & f)
{
	os << "form_name: " << f.getName() << std::endl \
	<< "form_status: " << f.getStatus() << std::endl \
	<< "form_min_grade_to_sign: " << f.getMinGradeToSign() << std::endl \
	<< "form_min_grade_to_execute: " << f.getMinGradeToExecute() << std::endl;
	return (os);
}
