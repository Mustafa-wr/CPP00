/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:35:07 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 15:25:44 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i = 0;
	Zombie *horde = zombieHorde(5, "me");
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return(0);
}