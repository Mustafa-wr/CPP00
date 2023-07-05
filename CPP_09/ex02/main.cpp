/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:13:25 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/05 20:06:54 by mradwan          ###   ########.fr       */
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

int parse(char **av)
{
	int i = 1, j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if(!isdigit(av[i][j]))
				return 0;
			j++;
		}
		i++;
	}
	j = 0;
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j] == ' ')
			j++;
		if(av[i][j] == '\0')
			return 0;
		i++;
	}
	return 1;
}

int main(int ac, char **av)
{
	std::vector<int> vector;
	std::list<int> list;
	if(ac < 2 || !parse(av))
	{
		std::cout << "Error\n";
		return 0;
	}
	
	size_t i = 1;
	while (av[i])
	{
		if(std::atoi(av[i]) < 0)
		{
			std::cout << "negatve nums are ot allowed\n";
			return 0;
		}
		vector.push_back(std::atoi(av[i]));
		i++;
	}
	
	i = 1;
	while (av[i])
	{
		if(std::atoi(av[i]) < 0)
		{
			std::cout << "negatve nums are ot allowed\n";
			return 0;
		}
		list.push_back(std::atoi(av[i]));
		i++;
	}
	
	i = 0;
	std::cout << "before :";
	while(i < vector.size())
	{
		std::cout << " " << vector[i];
		i++;
	}
	std::cout << std::endl;

	clock_t start = std::clock();
	sorting1(vector);
	clock_t end = std::clock();
	
	i = 0;
	std::cout << "after :";
	while(i < vector.size())
	{
		std::cout << " " << vector[i];
		i++;
	}
	std::cout << std::endl;
	std::cout << "time to proscess " << vector.size() << " elements with std::vector : " \
			  << static_cast<float>(end - start) / 10000 << std::endl;
	
	clock_t start2 = std::clock();
	sorting2(list);
	clock_t end2 = std::clock();

	std::cout << "time to proscess " << list.size() << " elements with std::list : " \
			  << static_cast<float>(end2 - start2) / 10000 << std::endl;
	return 0;
}
