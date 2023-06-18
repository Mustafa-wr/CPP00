/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:08:08 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/15 16:38:23 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

void	ScalarConverter::convert(std::string &l)
{
	convertChar(l);
	convertDouble(l);
	convertInt(l);
	convertFloat(l);
}

void	ScalarConverter::convertChar(std::string &l)
{
	if(ft_isprint(atoi(l.c_str())))
		std::cout << "char : " << (char)atoi(l.c_str()) << std::endl;
	else if (l == "nan" || l == "nanf" || l == "-inff" || l == "+inff" || "+inf" || "-inf")
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::convertInt(std::string &l)
{
	if (l == "nan" || l == "nanf" || l == "-inff" || l == "+inff" || l == "+inf" || l == "-inf")
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << atoi(l.c_str()) << std::endl;
}

void	ScalarConverter::convertDouble(std::string &l)
{
	if (l == "nan" || l == "+inf" || l == "-inf")
		std::cout << "double : " << l << std::endl;
	else if (l == "nanf")
		std::cout << "double : " << "nan" << std::endl;
	else if (l == "+inff")
		std::cout << "double : " << "+inf" << std::endl;
	else if (l == "-inff")
		std::cout << "double : " << "-inf" << std::endl;
	else if (l[l.length() - 1] == 'f')
		std::cout << "double : "  << l.substr(0, l.length() - 1) << std::fixed << std::setprecision(1) << std::endl;
	else
		std::cout << "double : " << std::fixed << std::setprecision(1) << std::stod(l)  << std::endl;
}

void	ScalarConverter::convertFloat(std::string &l)
{
	if (l == "nanf" || l == "+inff" || l == "-inff")
		std::cout << "float : " << l << std::endl;
	else if (l == "nan")
		std::cout << "float : "<< "nanf" << std::endl;
	else if (l == "+inf")
		std::cout << "float : "<< "+inff" << std::endl;
	else if (l == "-inf")
		std::cout << "float : "<< "-inff" << std::endl;
	else if (l[l.length() - 1] != 'f')
		std::cout << "float : "<< std::fixed << std::setprecision(1) << std::stof(l) << "f" << std::endl;
	else
		std::cout << "float : " << std::fixed << std::setprecision(1) << std::stof(l) << "f"  << std::endl;
}

