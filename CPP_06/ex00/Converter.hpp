/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:08:08 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/18 13:44:40 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

class ScalarConverter {

public:
	static void	convert(std::string &l);

private:
	static void convertInt(std::string &l);
	static void convertDouble(std::string &l);
	static void convertFloat(std::string &l);
	static void convertChar(std::string &l);

	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &Or);
	~ScalarConverter();

};

#endif