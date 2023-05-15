/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:59:30 by mradwan           #+#    #+#             */
/*   Updated: 2023/04/26 17:04:31 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);

private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif

