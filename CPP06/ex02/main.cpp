/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:19:31 by mcipolla          #+#    #+#             */
/*   Updated: 2022/09/13 01:28:08 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ABC.h"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

Base * generate(void){
	int	type = rand() % 3;
	if (type == 0)
		return (new A);
	else if (type == 1)
		return (new B);
	else if (type == 2)
		return (new C);
	else
		return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	Base a;
	Base b;
	Base c;
	try
	{
		a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}catch(std::exception & e){}
	try
	{
		b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}catch(std::exception & e){}
	try
	{
		c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}catch(std::exception & e){}
}

int main()
{
	Base*	ptr = generate();
	Base*	ref = generate();

	identify(ptr);
	identify(*ref);
	delete ptr;
	delete ref;
	return (0);
}