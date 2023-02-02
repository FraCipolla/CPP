#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too low";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
	this->_grade = other._grade;
	return (*this);
}

const std::string	Bureaucrat::get_name()
{
	return this->_name;
}

int	Bureaucrat::get_grade()
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
	{
		std::cout << *this << " cannot sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->_grade)
	{
		std::cout << *this << " cannot sign " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signs " << form << std::endl;
	}
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.get_name() << " (Grade " << bureaucrat.get_grade() << ")";
	return (out);
}
