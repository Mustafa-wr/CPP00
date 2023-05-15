/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:25:41 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/07 22:22:20 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB {
public:
    HumanB(const std::string &name);
    void attack() const;
    void setWeapon(const Weapon &weapon);

private:
    const std::string m_name;
    const Weapon* w_weapon;
};

#endif
