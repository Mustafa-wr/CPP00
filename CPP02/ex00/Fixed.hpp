/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:56:23 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/11 22:10:23 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _num_fb = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed &operator = (const Fixed &Or);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif