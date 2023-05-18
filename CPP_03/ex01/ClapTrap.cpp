/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:55:46 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/17 21:02:47 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "ClapTrap constructor called  name: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << " copy constructor called name:" << _name << std::endl; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Or)
{
	this->_name = Or._name;
	this->Hit_points = Or.Hit_points;
	this->Energy_points = Or.Energy_points;
	this->Attack_damage = Or.Attack_damage;
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called name: " << _name << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (Energy_points > 0)
	{
		std::cout << "claptrap " << _name << " attack " << target << " causing " << Attack_damage << " of damage" << std::endl;
		Energy_points -= 1;
	}
	else
		std::cout << " Claptrap doesn't have energy points " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if((unsigned int)Hit_points > 0)
	{
		Hit_points -= amount;
		std::cout << "claptrap git damage for " << amount << " hits " << std::endl;
		if(Hit_points < 0)
			Hit_points = 0;
	}
	else
		std::cout << _name << " clap could not takes damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_points > 0 && Hit_points < 10)
	{
		std::cout << "ClapTrap Rapaired" << std::endl;
		Energy_points -= 1;
		Hit_points += amount;
		if(Hit_points > 10)
			Hit_points = 10;
	}
	else if (!Energy_points)
		std::cout << _name << " can't repaire there is no energy points " << std::endl;
	else
		std::cout << _name << " can't repaire the Hit points has maximum amount" << std::endl;
}
