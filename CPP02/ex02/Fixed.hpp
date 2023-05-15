/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:51:13 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/15 12:29:10 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{

private:

	int _value;
	static const int _num_fb = 8;

public:

	Fixed();

	Fixed(const Fixed &src);
	Fixed(const int par);
	Fixed(const float par);

	Fixed &operator = (const Fixed &Or);

	int operator>(const Fixed &x) const;
	int operator<(const Fixed &x) const;
	int operator>=(const Fixed &x) const;
	int operator<=(const Fixed &x) const;
	int operator!=(const Fixed &x) const;
	int operator==(const Fixed &x) const;

	Fixed operator * (const Fixed &x);
	Fixed operator / (const Fixed &x);
	Fixed operator - (const Fixed &x);
	Fixed operator + (const Fixed &x);

	Fixed &operator++();   // pre-inc
    Fixed operator++(int); // post-inc
    Fixed &operator--();   // pre-dec
    Fixed operator--(int); // post-dec

	static Fixed &min(Fixed &num1, Fixed &num2);
	static const Fixed &min(const Fixed &num1, const Fixed &num2);
	static Fixed &max(Fixed &num1, Fixed &num2);
	static const Fixed &max(const Fixed &num1, const Fixed &num2);

	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif