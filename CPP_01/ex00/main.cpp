/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:56:35 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/08 20:23:32 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) 
{
    Zombie *zombie1 = newZombie("Bob");
    zombie1->announce();
    delete (zombie1);

    randomChump("Alice");
	// randomChump("me");

    return (0);
}
