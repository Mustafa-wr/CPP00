/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:58:01 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 15:25:55 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (){}

Zombie::Zombie (std::string name)
{
	_name = name;	
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << "> is dead :(" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce() const{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
