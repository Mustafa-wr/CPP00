/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:12 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/24 18:24:27 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
	try
	{
		std::vector<char> nums;
		nums.push_back('a');
		nums.push_back(9);
		nums.push_back(-1);
		nums.push_back(12);

		std::cout << easyfind(nums, 97) << std::endl \
			<< "successfully founded\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << " : err" << '\n';
	}
	
}