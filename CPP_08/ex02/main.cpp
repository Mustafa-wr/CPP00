/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:12 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/20 13:55:22 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	try
	{
		Array<int> intarr(5);
		unsigned int i = 0;
		while (i < intarr.size())
		{
			intarr[i] = i;
			std::cout << intarr[i] << "\n";
			i++;
		}
		//error
		std::cout << intarr[10];
	}
	catch(const std::exception &e)
	{
		std::cout << "err\n";
	}

	
	return 0;
}


