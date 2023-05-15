/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:58:26 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 15:25:59 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
private:
    std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	void	setName(std::string name);
	void	announce() const;
    
};

Zombie	*zombieHorde( int N, std::string name );

#endif