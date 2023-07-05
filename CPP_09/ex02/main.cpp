/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:13:25 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/05 19:30:40 by mradwan          ###   ########.fr       */
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


//   void sortWithContainer2(std::list<int>& sequence) {
//     if (sequence.size() <= 1) {
//       return;
//     }
//     std::list<int> left, right;
//     std::list<int>::iterator it = sequence.begin();
//     std::size_t middle = sequence.size() / 2;
//     for (std::size_t i = 0; i < middle; ++i) {
//       left.push_back(*it);
//       ++it;
//     }
//     for (std::size_t i = middle; i < sequence.size(); ++i) {
//       right.push_back(*it);
//       ++it;
//     }
//     sortWithContainer2(left);
//     sortWithContainer2(right);
//     sequence.clear();
//     std::list<int>::iterator leftIt = left.begin();
//     std::list<int>::iterator rightIt = right.begin();
//     while (leftIt != left.end() && rightIt != right.end()) {
//       if (*leftIt <= *rightIt) {
//         sequence.push_back(*leftIt);
//         ++leftIt;
//       } else {
//         sequence.push_back(*rightIt);
//         ++rightIt;
//       }
//     }
//     while (leftIt != left.end()) {
//       sequence.push_back(*leftIt);
//       ++leftIt;
//     }
//     while (rightIt != right.end()) {
//       sequence.push_back(*rightIt);
//       ++rightIt;
//     }
//   }
// }
int main(int ac, char **av)
{
	std::vector<int> vector;
	std::list<int> list;
	if(ac < 2)
		return 0;
	
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
