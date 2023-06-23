/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:53:58 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/23 20:41:21 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span &Span::operator=(const Span &Or)
{
	_maxsize = Or._maxsize;
	_numbers = Or._numbers;
	return (*this);
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::Span(unsigned int N)
{
	_maxsize = N;
}

void Span::addNumber(int num)
{
	if(_numbers.size() >= _maxsize)
	{
		std::cout << "it's full\n";
		throw (std::exception());
	}
	_numbers.push_back(num);
}

int Span::shortestSpan()
{
	if(_numbers.size() < 2)
	{
		std::cout << "can't find span with less than 2 nums\n";
		throw std::exception();
	}
	std::sort(_numbers.begin(), _numbers.end());
	int min = INT_MAX;
	size_t i = 0;
	size_t j;
	while (i < _numbers.size())
	{
		j = i + 1;
		while (j < _numbers.size())
		{
			int s = abs(_numbers[i] - _numbers[j]);
			if(s < min)
				min = s;
			j++;
		}
		i++;
	}
	return (min);
}

int	Span::longestSpan()
{
	if(_numbers.size() < 2)
	{
		std::cout << "can't find span with less than 2 nums\n";
		throw std::exception();
	}
	std::sort(_numbers.begin(), _numbers.end());
	return _numbers.back() - _numbers.front();
}
