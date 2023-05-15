/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:25:28 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/02 17:51:44 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
public:
	HumanA (const std::string name, const Weapon &weapon);
	~HumanA();
	void attack() const;
	
private:	
	const std::string m_name;
	const Weapon &w_weapon;
};

#endif