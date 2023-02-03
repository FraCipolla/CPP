#ifndef FORM_HPP
# define FORM_HPP
class Form;
# include "Bureaucrat.hpp"

class Form
{
	private:
		Form();
		std::string const	_name;
		bool				_signed;
		int const			_minGradeToSign;
		int const			_minGradeToExecute;
	public:
		Form(std::string name, int minGradeToSign, int minGradeToExecute);
		Form(Form const & src);
		Form&	operator=(Form const & rhs);
		~Form();
		std::string	getName() const;
		bool		getStatus() const;
		int			getMinGradeToSign() const;
		int			getMinGradeToExecute() const;
		void		beSigned(Bureaucrat const & b);
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form Exception: grade is too low");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form Exception: grade is too high");
				}
		};
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too high");
				}
		};
};

std::ostream&	operator<<(std::ostream & os, Form const & f);

#endif
