/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:41:04 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/04 15:13:54 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

float run(const std::string &str)
{
	std::stack<float> stack;
	std::istringstream iss(str);
	std::string	obj;
	
	while(iss >> std::skipws >> obj)
	{
		if(obj.length() != 1)
			throw (std::runtime_error("Error\n"));
		if(isdigit(obj[0]))
		{
			float num = std::atof(obj.c_str());
			stack.push(num);
		}
		else if(obj == "+")
		{
			if(stack.size() < 2)
				throw (std::runtime_error("Error\n"));
			float b = stack.top();
			stack.pop();
			float a = stack.top();
			stack.pop();
			stack.push(a + b);
		}
		else if(obj == "-")
		{
			if(stack.size() < 2)
				throw (std::runtime_error("Error\n"));
			float b = stack.top();
			stack.pop();
			float a = stack.top();
			stack.pop();
			stack.push(a - b);
		}
		else if(obj == "/")
		{
			if(stack.size() < 2)
				throw (std::runtime_error("Error\n"));
			float b = stack.top();
			stack.pop();
			float a = stack.top();
			stack.pop();
			if (b == 0)
                throw std::runtime_error("Error\n");
			stack.push(a / b);
		}
		else if(obj == "*")
		{
			if(stack.size() < 2)
				throw (std::runtime_error("Error\n"));
			float b = stack.top();
			stack.pop();
			float a = stack.top();
			stack.pop();
			stack.push(a * b);
		}
	}
	if(stack.size() != 1)
		throw (std::runtime_error("Error\n"));
		
	return stack.top();
}