#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int	_grade;
	public:
		Bureaucrat(std::string name, int grade);
		virtual ~Bureaucrat();
		class	GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		const std::string	get_name();
		int					get_grade();
		void	incrementGrade(void);
		void	decrementGrade(void);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif