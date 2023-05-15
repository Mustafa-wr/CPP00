/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:23:05 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/09 15:40:26 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
	void complain(std::string level);
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );	

typedef void (Harl::*FuncPtr)(void);
    FuncPtr functions[4];
};
#endif