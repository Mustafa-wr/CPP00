/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/03 15:35:15 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>

class Bitcoin {
private:
	std::map<std::string, float> data;

public:
	Bitcoin();
	Bitcoin(const Bitcoin &src);
	Bitcoin &operator=(const Bitcoin &Or);
	~Bitcoin();
	Bitcoin(const std::string &database);

	void store_data(const std::string &fileName); // loader
    float the_result(const std::string &date, float value); // evaluate
};

int	validation(std::string &date);

#endif

