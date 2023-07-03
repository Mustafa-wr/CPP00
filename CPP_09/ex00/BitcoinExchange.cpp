/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:11:51 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/03 16:36:37 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {}

Bitcoin::Bitcoin(const Bitcoin &src)
{
	*this = src;
}

Bitcoin	&Bitcoin::operator=(const Bitcoin &Or)
{
	this->data = Or.data;
	return (*this);
}

Bitcoin::Bitcoin(const std::string &database)
{
	store_data(database);
}

Bitcoin::~Bitcoin() {}

void	Bitcoin::store_data(const std::string &fileName)
{
	std::ifstream file(fileName.c_str());
	std::string line;

	if(!file)
		throw std::runtime_error("couldn't open " + fileName);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date;
		std::getline(ss, date, ',');
		std::string price_s;
		std::getline(ss, price_s);
		std::stringstream ssprice(price_s);
		float price;
		ssprice >> price;

		data[date] = price;
	}
}

float	Bitcoin::the_result(const std::string &date, float value)
{
	std::map<std::string, float>::iterator it = data.lower_bound(date);

	if(it == data.end() || it->first != date)
	{
		if(it == data.begin())
			throw std::runtime_error("the date is earlier than : " + date);
		it--;
	}
	float the_price = it->second;
	return value * the_price;
}

int	validation(std::string &date)
{
	if(date.length() != 10)
		return 0;
	if(date[4] != '-' || date[7] != '-')
		return 0;

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

	if(month < 1 || month > 12)
		return 0;
	if(day < 1 || day > 31)
		return 0;

	if(month == 4 || month == 6 || month == 9 || month == 11)
		if (day > 30)
			return 0;

	if (month == 2) 
	{
        if (day > 29)
			return 0;
        if (day == 29 && (year % 4 != 0 || \
			(year % 100 == 0 && year % 400 != 0)))
			return 0;
    }
	
	return 1;
}