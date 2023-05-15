/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:51:16 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/15 12:28:02 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int par)
{
	_value = par << _num_fb;
}

Fixed::Fixed(const float par)
{
	_value = roundf(par * (256));
}

Fixed Fixed::operator * (const Fixed &x)
{
	return (Fixed(toFloat() * x.toFloat()));
}

Fixed Fixed::operator / (const Fixed &x)
{
	return (Fixed(toFloat() / x.toFloat()));
}

Fixed Fixed::operator - (const Fixed &x)
{
	return (Fixed(toFloat() - x.toFloat()));
}

Fixed Fixed::operator + (const Fixed &x)
{
	return (Fixed(toFloat() + x.toFloat()));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::operator<(const Fixed &x) const
{
	return (_value < x._value);
}

int Fixed::operator>(const Fixed &x) const
{
	return (_value > x._value);
}

int Fixed::operator==(const Fixed &x) const
{
	return (_value == x._value);
}

int Fixed::operator!=(const Fixed &x) const
{
	return (_value != x._value);
}

int Fixed::operator>=(const Fixed &x) const
{
	return (_value >= x._value);
}

int Fixed::operator<=(const Fixed &x) const
{
	return (_value <= x._value);
}

Fixed &Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed x = *this;
	++(*this);
	return (x);
}

Fixed &Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed x = *this;
	--(*this);
	return (x);
}

Fixed &Fixed::operator=(const Fixed &Or)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &Or)
		_value = Or._value;
	return(*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::toInt(void) const
{
	return (_value >> _num_fb);
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (float)(256));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
