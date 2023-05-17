/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:56:03 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/16 19:41:54 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

private:
	std::string _name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_damage;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator = (const ClapTrap &Or);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif