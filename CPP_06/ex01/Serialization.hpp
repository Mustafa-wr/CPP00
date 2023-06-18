/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:04:38 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/16 16:51:59 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <cstdint>

class Data
{
public:
	Data();
	Data(const Data &src);
	Data &operator=(const Data &Or);
	~Data();
    int value;
};

class Serializer
{
public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &src);
	Serializer &operator=(const Serializer &Or);
	~Serializer();
};

#endif
