/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:23:47 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/17 18:49:37 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (const std::string &name) : m_name(name), w_weapon(NULL)
{
}

void	HumanB::attack() const
{
	if (w_weapon != NULL)
		std::cout << m_name << " attacks with their " << w_weapon->getType() << std::endl;
	else 
		std::cout << m_name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	w_weapon = &weapon;
}
