/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:04:23 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 23:04:23 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		static std::string const	_forms[3];
		int							_idx;
		int							_nForms;
	public:
		Intern();
		Intern(Intern const & src);
		Intern&	operator=(Intern const & rhs);
		~Intern();
		AForm*	makeForm(std::string f, std::string target);
		void	searchForm(std::string f);
		class NoExistingForm : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("There are no forms names like that");
			}
		};
};

#endif
