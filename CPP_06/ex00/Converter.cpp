/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:08:08 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/18 15:53:05 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	return(c >= '0' && c<= '9');
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
	double num = 0;
	if (l.length() == 1 && !ft_isdigit(l[0]))
		num = (double)(l[0]);
	else
		num = std::atof(l.c_str());
	if (num - (int)(num) == 0)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}

void	ScalarConverter::convertFloat(std::string &l)
{
	float num = 0;
	if (l.length() == 1 && !ft_isdigit(l[0]))
		num = (float)(l[0]);
	else
		num = std::atof(l.c_str());
	if (num - (int)(num) == 0)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

