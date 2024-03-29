/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:04:34 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 23:04:35 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 150, 150), _target("no target")
{
	std::cout << "Default constructor called on RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Constructor called on RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), src.getMinGradeToSign(), src.getMinGradeToExecute()), _target(src.getTarget())
{
	std::cout << "Copy constructor called on RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "Copy assignment operator called on RobotomyRequestForm" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called on RobotomyRequestForm" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	fate;

	fate = rand() % 2;
	if (!this->getStatus())
		throw (AForm::NotSignedYet());
	if (executor.getGrade() > this->getMinGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::cout << "BbzzbzZBZBZzzBZ robotizing in progress.. ZBZ" << std::endl;
	if (fate)
		std::cout << this->_target << " has been robotized successfully!" << std::endl;
	else
		std::cout << "Unfortunately, robotomy failed. Try again." << std::endl;
}
