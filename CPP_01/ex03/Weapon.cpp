/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:22:53 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 15:34:08 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : w_type("knife"){}

Weapon::Weapon(const std::string &type) : w_type(type)
{
}

const std::string &Weapon::getType() const 
{
	return (w_type);
}

void Weapon::setType(const std::string &type)
{
	w_type = type;
}