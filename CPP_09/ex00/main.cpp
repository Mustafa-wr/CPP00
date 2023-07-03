/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:46:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/03 16:27:46 by mradwan          ###   ########.fr       */
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

		int flag = 0, dot = 0;
		for(size_t i = 0; i < val_s.length(); i++)
		{
			if(!isdigit(val_s[i]) && val_s[i] != ' ' && val_s[i] != '.')
				flag = 1;
			if(val_s[i] == '-')
				flag = 2;
			if(val_s[i] == '.')
				dot++;
		}
		if(flag == 1 || dot > 1 || flag == 2)
		{
			if(flag == 2)
				std::cout << "Error: not a positive number.\n";
			else
				std::cout << "Invalid float format\n";
			continue;
		}

		float value = std::atof(val_s.c_str());
		
		if(!validation(date))
		{
			std::cout << "invalid date format\n";
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
}