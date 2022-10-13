/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:43:13 by mcipolla          #+#    #+#             */
/*   Updated: 2022/10/13 15:43:13 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv){
    int i;
    int c;
    
    c = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        while (argv[c]){
            i = -1;
            while(argv[c][++i])
                std::cout << char(toupper(argv[c][i]));
            c++;
        }
    }
    std::cout << std::endl;
    return (0);
}
