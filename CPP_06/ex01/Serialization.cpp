/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:09:16 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/15 19:53:55 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data::Data() {}

Data::Data(const Data &src) 
{
	*this = src;
}

Data &Data::operator=(const Data &Or)
{
	value = Or.value;
	return (*this);
}

Data::~Data() {}

uintptr_t Serializer::serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}