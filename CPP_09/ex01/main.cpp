/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:13:25 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/05 20:55:18 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error\n";
		return 0;
	}

	int i = 0;
	while (av[1][i])
	{
		if(av[1][i] != ' ' && av[1][i] != '+' && av[1][i] != '-' && av[1][i] != '/' \
			&& av[1][i] != '*' && !isdigit(av[1][i]))
		{
			std::cout << "Error\n";
			return 0;
		}
		i++;
	}
	
	try
	{
		float r = run(av[1]);
		std::cout << r << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return 0;
}
