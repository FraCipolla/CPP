#include "Form.h"

Form::Form(const std::string name, int signGrade, int executeGrade):
	_name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already signed";
}

bool	Form::isSigned(void) const{
	return this->_signed;
}

int	Form::getSignGrade(void) const
{
	return this->_signGrade;
}

int Form::getExecuteGrade(void) const
{
	return this->_executeGrade;
}

std::string const	Form::getName()
{
	return this->_name;
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.get_grade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::FormAlreadySignedException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "(" << form.getName() << ")[" << ((form.isSigned()) ? "Signed" : "Unsigned")
		<< "]<Sign:" << form.getSignGrade() << ",Execute:"
		<< form.getExecuteGrade() << ">";
	return (out);
}