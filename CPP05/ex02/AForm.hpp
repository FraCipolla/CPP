/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:03:29 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 23:03:29 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
class AForm;
# include "Bureaucrat.hpp"
# include <fstream>
# include <cstdlib>

class AForm
{
	private:
		AForm();
		std::string const	_name;
		bool				_signed;
		int const			_minGradeToSign;
		int const			_minGradeToExecute;
	public:
		AForm(std::string name, int minGradeToSign, int minGradeToExecute);
		AForm(AForm const & src);
		AForm&	operator=(AForm const & rhs);
		virtual ~AForm();
		std::string			getName() const;
		bool				getStatus() const;
		int					getMinGradeToSign() const;
		int					getMinGradeToExecute() const;
		void				beSigned(Bureaucrat const & b);
		virtual std::string	getTarget() const = 0;
		virtual void		execute(Bureaucrat const & executor) const = 0;
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
					return ("Form Exception: form is already signed");
				}
		};
		class NotSignedYet : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form Exception: form is not yet signed. You can't execute");
				}
		};
};

std::ostream&	operator<<(std::ostream & os, AForm const & f);

#endif
