/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:46:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/02 22:00:59 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void main_helper(std::ifstream &input, Bitcoin &btc)
{
	std::string line;
	std::getline(input, line);
	while (std::getline(input, line))
	{
		std::stringstream ss(line);
		std::string date;
		std::getline(ss, date, '|');
		date.erase(std::remove(date.begin(), \
			date.end(), ' '), date.end());
		
		std::string val_s;
		std::getline(ss, val_s);

		char *end;
		float value = std::strtof(val_s.c_str(), &end);
		
		if(!validation(date))
		{
			std::cout << "invalid date format\n";
			continue;
		}
		if(end == val_s.c_str())
		{
			std::cout << "Invalid float format\n";
            continue;
		}
		if(value < 0)
		{
			std::cout << "Error: not a positive number.\n";
			continue;
		}
		if(value > 1000)
		{
			std::cout << "value out of range\n";
			continue;
		}
		float r = btc.the_result(date, value);
		std::cout << date << " => " << value << " = " << r \
			<< "\n";
	}	
}

int main(int ac, char **av)
{
	Bitcoin btc("data.csv");
	
	if(ac != 2)
	{
		std::cout << "Usage: btc inputFile.txt\n";
		return 0;
	}
	
	std::ifstream input(av[1]);
	if(!input.is_open())
	{
		std::cout << "couldn't open\n";
		return 0;
	}
	
	main_helper(input, btc);

	return 0;
	// std::string line;
	// std::getline(input, line);
	// while (std::getline(input, line))
	// {
	// 	std::stringstream ss(line);
	// 	std::string date;
	// 	std::getline(ss, date, '|');
	// 	date.erase(std::remove(date.begin(), \
	// 		date.end(), ' '), date.end());
		
	// 	std::string val_s;
	// 	std::getline(ss, val_s);

	// 	char *end;
	// 	float value = std::strtof(val_s.c_str(), &end);
		
	// 	if(!validation(date))
	// 	{
	// 		std::cout << "invalid date format\n";
	// 		continue;
	// 	}
	// 	if(end == val_s.c_str())
	// 	{
	// 		std::cout << "Invalid float format\n";
    //         continue;
	// 	}
	// 	if(value < 0)
	// 	{
	// 		std::cout << "Error: not a positive number.\n";
	// 		continue;
	// 	}
	// 	if(value > 1000)
	// 	{
	// 		std::cout << "value out of range\n";
	// 		continue;
	// 	}
	// 	float r = btc.the_result(date, value);
	// 	std::cout << date << " => " << value << " = " << r \
	// 		<< "\n";
	// }
}