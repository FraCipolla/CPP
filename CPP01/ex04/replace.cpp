/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:00:16 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 17:00:16 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <string>

Filename::Filename(void){
}

Filename::~Filename(void){
}

bool	Filename::set_infile_outfile(std::string in, std::string out){
	if (in == ""){
		std::cout << "error, invalid argument" << std::endl;
		return (false);
	}
	else{
		my_file.open(in.c_str(), std::ios::in);
		if (my_file.is_open()){
			std::cout << "I'm opening " << in << " as input" << std::endl;
		}
		else{
			std::cout << "error opening " << in << ", invalid filename" << std::endl;
			return (false);
		}
	}
	if (out == ""){
		std::cout << "error, invalid argument" << std::endl;
		return (false);
	}
	else{
		outfile.open(in + ".replace", std::ios_base::out);
		std::cout << "I'm creating " << in + ".replace" << "as output" << std::endl;
	}
	return (true);
}

void	Filename::search_replace(std::string search, std::string replace)
{
	std::string	result;
	size_t		toReplaceLen = search.length();

	if (search == "" || replace == "")
	{
		std::cerr << "Strings can't be empty" << std::endl;
		return ;
	}
	result.assign(std::istreambuf_iterator<char>(this->my_file),
			std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < result.length(); pos++)
	{
		if (result.compare(pos, toReplaceLen, search) == 0)
		{
			result.erase(pos, toReplaceLen);
			result.insert(pos, replace);
			/* result.replace(pos, toReplaceLen, replacement); */
		}
	}
	outfile << result;
}