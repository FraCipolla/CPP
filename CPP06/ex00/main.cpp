/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:23:57 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/13 00:52:34 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

int main(int argc, char *argv[])
{
	Number	number;
	if (argc != 2){
		std::cout << "invalid arguments" << std::endl;
		return (0);
	}
	std::cout << "Char: " << number.convertChar(argv[1]); std::cout << std::endl;
	std::cout << "Int: " << number.convertInt(argv[1]); std::cout << std::endl;
	std::cout << "Float: " << number.convertFloat(argv[1]) + "f"; std::cout << std::endl;
	std::cout << "Double: " << number.convertDouble(argv[1]); std::cout << std::endl;
	return (0);
}