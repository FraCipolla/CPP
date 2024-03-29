/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:04:29 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 23:04:29 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("no target")
{
	std::cout << "Default constructor called on PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Constructor called on PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	std::cout << "Copy constructor called on PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "Copy assignment operator called on PresidentialPardonForm" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called on PresidentialPardonForm" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw (AForm::NotSignedYet());
	if (executor.getGrade() > this->getMinGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::cout << this->getTarget() << " has been pardoned by His Majesty Zaphod Beeblebrox!" << std::endl;
}
