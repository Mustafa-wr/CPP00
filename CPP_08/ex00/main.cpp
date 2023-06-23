/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:12 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/23 14:53:33 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
	try
	{
		std::vector<int> nums;
		nums.push_back(10);
		nums.push_back(9);
		nums.push_back(-1);
		nums.push_back(12);
		//err
		std::cout << easyfind(nums, -100) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << " : err" << '\n';
	}
	
}