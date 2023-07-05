/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:13:25 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/05 18:32:44 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	sorting(std::vector<int> &bar)
{
	if(bar.size() < 2)
		return ;
	
	std::vector<int> left;
	std::vector<int> right;
	
	int mid = bar.size() / 2;

	for (size_t i = 0; i < mid; i++)
		left.push_back(bar[i]);
	for (size_t i = 0; i < (bar.size()) - mid; i++)
		right.push_back(bar[mid + i]);

	sorting(left);
	sorting(right);
	
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

//  	std::size_t i = 0;
//     std::size_t j = 0;
//     while (i < left.size() && j < right.size()) {
//       if (left[i] <= right[j]) {
//         sequence.push_back(left[i]);
//         ++i;
//       } else {
//         sequence.push_back(right[j]);
//         ++j;
//       }
//     }
//     while (i < left.size()) {
//       sequence.push_back(left[i]);
//       ++i;
//     }
//     while (j < right.size()) {
//       sequence.push_back(right[j]);
//       ++j;
//     }
//   }


int main(int ac, char **av)
{
	std::vector<int> vector;
	if(ac < 2)
		return 0;
	int i = 1;
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
	i = 0;
	std::cout << "before :";
	while(i < vector.size())
	{
		std::cout << " " << vector[i];
		i++;
	}
	std::cout << std::endl;

	clock_t start = std::clock();
	sorting(vector);
	clock_t end = std::clock();
	i = 0;
	std::cout << "after :";
	while(i < vector.size())
	{
		std::cout << " " << vector[i];
		i++;
	}
	std::cout << std::endl;
	std::cout << "time to proscess" << vector.size() << "elements with std::vector : " \
			  << static_cast<float>(end - start) / 1000 << std::endl;
	return 0;
}
