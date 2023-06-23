/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:12 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/19 17:11:15 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T> void	printing(T &obj)
{
	std::cout << obj << " ";
}

int main()
{
	int arrays[] = {1, 2, 3, 4};
	size_t len = 4;

	iter(arrays, len, printing<int>);
	std::cout << std::endl;
}
