/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:00:20 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/02 17:00:20 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char **argv){

	Filename	file;
	if (argc != 4){
		std::cout << "Invalid arguments" << std::endl;
		return (0);
	}
	if (!file.set_infile_outfile(argv[1], "outfile.txt")){
		std::cout << "Invalid arguments" << std::endl;
		return (0);
		}
	file.search_replace(argv[2], argv[3]);
}