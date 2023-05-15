/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:57:34 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/08 16:30:29 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" \
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" \
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." \
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
	std::string levelsArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	 FuncPtr func;
	while (i < 4)
	{
		if(level == levelsArray[i])
		switch(i)
		{
			case 0:
			    func = functions[0];
				(this->*func)();
				break;
			case 1:
			    func = functions[1];
				(this->*func)();
				break;
			case 2:
			    func = functions[2];
				(this->*func)();
				break;
			case 3:
			    func = functions[3];
				(this->*func)();
				break;
			default:     return;
		}
		i++;
	}
}
