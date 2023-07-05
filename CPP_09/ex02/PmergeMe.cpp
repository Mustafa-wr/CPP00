/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:41:04 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/05 20:48:51 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	sorting1(std::vector<int> &bar)
{
	if(bar.size() < 2)
		return ;
	
	std::vector<int> left;
	std::vector<int> right;
	
	size_t mid = bar.size() / 2;

	for (size_t i = 0; i < mid; i++)
		left.push_back(bar[i]);
	for (size_t i = 0; i < (bar.size()) - mid; i++)
		right.push_back(bar[mid + i]);

	sorting1(left);
	sorting1(right);
	
	size_t i = 0, j = 0, c = 0;
	while (j < left.size() && c < right.size())
	{
		if(left[j] < right[c])
			bar[i] = left[j++];
		else
			bar[i] = right[c++];
		i++;
	}
	while (j < left.size())
		bar[i++] = left[j++];
	while (c < right.size())
		bar[i++] = right[c++];

}


void	sorting2(std::list<int> &bar)
{
	if(bar.size() < 2)
		return ;
	
	std::list<int> left;
	std::list<int> right;
	std::list<int>::iterator it = bar.begin();

	size_t mid = bar.size() / 2;

	for (size_t i = 0; i < mid; i++)
	{
		left.push_back(*it);
		it++;
	}
	for (size_t i = mid; i < bar.size(); i++)
	{
		right.push_back(*it);
		it++;
	}

	sorting2(left);
	sorting2(right);
	
	bar.clear();

    std::list<int>::iterator leftIt = left.begin();
    std::list<int>::iterator rightIt = right.begin();
    while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt <= *rightIt)
		{
			bar.push_back(*leftIt);
			leftIt++;
		}
		else
		{
			bar.push_back(*rightIt);
			rightIt++;
		}
    }
    while (leftIt != left.end())
	{
      bar.push_back(*leftIt);
      leftIt++;
    }
    while (rightIt != right.end())
	{
      bar.push_back(*rightIt);
      rightIt++;
    }
}