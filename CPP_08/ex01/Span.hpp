/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/24 16:55:34 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class Span
{

private:
	unsigned int _maxsize;
	std::vector<int> _numbers;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &src);
	Span &operator=(const Span &Or);
	~Span();

	void	addNumber(int num);
	
	int 	shortestSpan();
	int		longestSpan();

};


#endif







