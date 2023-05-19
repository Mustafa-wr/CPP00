/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_animal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:54:03 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/19 17:54:32 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong_animal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Or)
{
	this->type = Or.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make sound" << std::endl;
}