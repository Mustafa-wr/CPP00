/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:33:50 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/08 20:26:30 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *PTR = &string;
	std::string &REF = string;

	std::cout << "The memory address of the string variable is " << &string << std::endl;
	std::cout << "The memory address held by stringPTR is " << PTR << std::endl;
	std::cout << "The memory address held by stringREF is " << &REF << std::endl;

	std::cout << "The value of the string variable is " << string << std::endl;
	std::cout << "The value pointed to by stringPTR " << *PTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << REF << std::endl;

	return 0;
}