/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:00:08 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 17:00:08 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

class Filename{
	private:
		std::fstream	my_file;
		std::ofstream	outfile;
		std::string		search;
		std::string		replace;
	public:
		Filename(void);
		~Filename(void);

		bool	set_infile_outfile(std::string in, std::string out);
		void	search_replace(std::string search, std::string replace);
};

#endif