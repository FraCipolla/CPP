/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:25:00 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/13 00:58:20 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number()
{
}

Number::~Number()
{
}

std::string	Number::convertChar(std::string in){
	if (in == "nan" || in == "-inf" || in == "+inf"
		|| in == "nanf" || in == "-inff" || in == "+inff")
		return "impossible";
	if ( in[0] < 48 || in[0] > 57)
		return in;
	if (std::stoi(in) <= 32 || std::stoi(in) > 126)
		return "Non displayable";
	std::string	ret = "'";
	ret.push_back((char)std::stoi(in));
	ret.push_back('\'');
	return (ret);

}

std::string	Number::convertInt(std::string in){
	if (in == "nan" || in == "-inf" || in == "+inf"
		|| in == "nanf" || in == "-inff" || in == "+inff")
		return "impossible";
	for (size_t i = 0; i < in.size(); i++)
	{
		if (in[i] == '.'){
			in.resize(i);
			return in.append("");
		}
	}
	if (isdigit(in[0]) == false){
		char ch = in[0];
		std::string ret = std::to_string((int)ch);
		return ret;
	}
	return in;
}

std::string	Number::convertFloat(std::string in){
	if (in == "nan" || in == "-inf" || in == "+inf")
		return (in);
		for (size_t i = 0; i < in.size(); i++)
	{
		if (in[i] == '.'){
			for (size_t c = 0; c < in.size(); c++)
			if (in[c] != '.' && isdigit(in[c]) == false){
				in.resize(c);
				return in.append("");
			}
		}
	}
	if (isdigit(in[0]) == false){
		char ch = in[0];
		std::string ret = std::to_string((int)ch);
		return ret.append(".0");
	}
	return in.append(".0");
}

std::string Number::convertDouble(std::string in){
	if (in == "nan" || in == "-inf" || in == "+inf")
		return (in);
	for (size_t i = 0; i < in.size(); i++)
	{
		if (in[i] == '.'){
			for (size_t c = 0; c < in.size(); c++)
			if (in[c] != '.' && isdigit(in[c]) == false){
				in.resize(c);
				return in.append("");
			}
		}
	}
	if (isdigit(in[0]) == false){
		char ch = in[0];
		std::string ret = std::to_string((int)ch);
		return ret.append(".0");
	}
	return in.append(".0");
}