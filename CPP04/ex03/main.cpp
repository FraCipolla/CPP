/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:19:53 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/06 12:16:55 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"
#include "Character.h"
#include "Ice.h"
#include "Cure.h"

int main(void) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "PERSONAL TESTS (DROPPING)" << std::endl;

	ICharacter *jason = new Character("jason");
	ICharacter *target = new Character("target");
	IMateriaSource *ms = new MateriaSource();
	ms->learnMateria(new Ice());
	ms->learnMateria(new Cure());

	AMateria *AM;

	AM = ms->createMateria("ice");
	jason->equip(AM);
	AM = ms->createMateria("cure");
	jason->equip(AM);
	AM = ms->createMateria("ice");
	jason->equip(AM);

	jason->use(0, *target);
	jason->use(1, *target);
	jason->use(2, *target);

	jason->unequip(0);
	jason->unequip(1);
	jason->unequip(2);

	delete jason;
	delete target;
	// delete AM;
	delete ms;

	return (0);
}