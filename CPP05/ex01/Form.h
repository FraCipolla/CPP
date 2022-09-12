#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool	_signed;
	int		_signGrade;
	int		_executeGrade;
public:
	Form(const std::string name, int signGrade, int executeGrade);
	virtual ~Form();
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	class FormAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
	const std::string	getName();
	bool	isSigned(void) const;
	int		getSignGrade(void) const;
	int		getExecuteGrade(void) const;
	void	beSigned(Bureaucrat& bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif