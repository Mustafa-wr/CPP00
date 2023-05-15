/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:56:54 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 16:48:37 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "<" << _name << "> destroyed" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
