/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:23:06 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 15:31:11 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string name, const Weapon &weapon) : m_name(name) , w_weapon(weapon)
{
}

HumanA::~HumanA() {}

void HumanA::attack() const
{
	std::cout << m_name << " attacks with their " << w_weapon.getType() << std::endl;
}