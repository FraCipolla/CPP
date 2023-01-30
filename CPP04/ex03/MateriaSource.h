/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:53:05 by mcipolla          #+#    #+#             */
/*   Updated: 2023/01/30 17:29:16 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource & ref);
	~MateriaSource();

	MateriaSource & operator=(const MateriaSource & ref);

	void	learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
private:
	AMateria	*(_inventory[4]);
};

#endif