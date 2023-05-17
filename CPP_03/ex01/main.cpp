/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:55:34 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/17 17:12:17 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap l("john");

	l.attack("enemy");
	l.takeDamage(10);
	l.takeDamage(9);
	l.takeDamage(9);
}
