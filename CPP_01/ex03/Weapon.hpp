/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:25:18 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/02 17:00:59 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{

public:
	Weapon();
	Weapon(const std::string &type);
	const std::string &getType() const;
	void setType(const std::string &type);
	
private:
	std::string w_type;
};


#endif