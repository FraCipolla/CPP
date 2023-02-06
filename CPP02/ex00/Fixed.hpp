/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:18:42 by mcipolla          #+#    #+#             */
/*   Updated: 2023/02/05 20:18:43 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fix;
	static const int	_fract = 8;
public:
	Fixed();
	Fixed(const Fixed & ref);
	~Fixed();

	Fixed &operator=(const Fixed & rhs);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream&	operator<<(std::ostream& o, Fixed const & i);

#endif