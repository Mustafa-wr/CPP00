/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:10:18 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/15 20:17:13 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>
int main()
{
	Data k;
	k.value = 42;
	
	// uintptr_t ka = Serializer::serialize(&k);

	std::cout << Serializer::deserialize(Serializer::serialize(&k))->value << "\n";
	
	return 0;
}