/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:44:29 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/13 01:50:37 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <string>
#include <iostream>

template <typename T>
void	iter(T* addr, int size, void (*f)(T const &val)){
	for (int i = 0; i < size; i++){
		(*f)(addr[i]);
	}
}

template <typename T>
void print(T const &val)
{
	std::cout << val << std::endl;
}

#endif