/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:30:10 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/13 01:42:25 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <string>
#include <iostream>

template <typename T>
void	swap(T &arg1, T &arg2){
	T tmp;
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
T	min(T &arg1, T &arg2){
	return (arg1 < arg2 ? arg1 : arg2);
}

template <typename T>
T max(T &arg1, T &arg2){
	return (arg1 > arg2 ? arg1 : arg2);
}
#endif