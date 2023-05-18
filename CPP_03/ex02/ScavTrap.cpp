/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:33:22 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/17 21:13:33 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap constructor called name: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) //calling consturctor
{
	std::cout << "ScavTrap copy constructor called name: " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called name: " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &Or)
{
	this->Attack_damage = Or.Attack_damage;
	this->Energy_points = Or.Energy_points;
	this->_name = Or._name;
	this->Hit_points = Or.Hit_points;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (Energy_points > 0)
	{
		std::cout << "scavtrap " << _name << " attack " << target << " causing " << Attack_damage << " of damage" << std::endl;
		Energy_points -= 1;
	}
	else
		std::cout << " Claptrap doesn't have energy points" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " now is in gatekeeper mode " << std::endl;
}