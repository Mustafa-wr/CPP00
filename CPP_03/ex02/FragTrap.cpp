/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:21:25 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/17 21:12:58 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap constructor called name: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) //calling consturctor
{
	std::cout << "FragTrap copy constructor called name: " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called name: " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &Or)
{
	this->Attack_damage = Or.Attack_damage;
	this->Energy_points = Or.Energy_points;
	this->_name = Or._name;
	this->Hit_points = Or.Hit_points;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << " Says highfiveguys" << std::endl;
}
