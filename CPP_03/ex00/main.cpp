/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:55:34 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/16 19:40:51 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap l("john");

	l.attack("enemy");
	l.takeDamage(10);
	l.takeDamage(9);
	l.takeDamage(9);
}