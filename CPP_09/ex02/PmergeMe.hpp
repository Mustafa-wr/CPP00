/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:13:21 by mradwan           #+#    #+#             */
/*   Updated: 2023/07/05 19:58:45 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <vector>
#include <list>
#include <stdlib.h>
#include <iostream>
#include <ctime>















// class PmergeMe
// {
// private:
	
// public:
// 	PmergeMe();
// 	PmergeMe(const PmergeMe &src);
// 	PmergeMe &operator=(const PmergeMe &Or);
// 	~PmergeMe();
// };


/*
#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <list>
namespace PmergeMe {
  // Merge-Insert sort using std::vector as the container
  void sortWithContainer1(std::vector<int>& sequence) {
    if (sequence.size() <= 1) {
      return;
    }
    std::vector<int> left(sequence.begin(), sequence.begin() + sequence.size() / 2);
    std::vector<int> right(sequence.begin() + sequence.size() / 2, sequence.end());
    sortWithContainer1(left);
    sortWithContainer1(right);
    sequence.clear();
    std::size_t i = 0;
    std::size_t j = 0;
    while (i < left.size() && j < right.size()) {
      if (left[i] <= right[j]) {
        sequence.push_back(left[i]);
        ++i;
      } else {
        sequence.push_back(right[j]);
        ++j;
      }
    }
    while (i < left.size()) {
      sequence.push_back(left[i]);
      ++i;
    }
    while (j < right.size()) {
      sequence.push_back(right[j]);
      ++j;
    }
  }
  // Merge-Insert sort using std::list as the container
  void sortWithContainer2(std::list<int>& sequence) {
    if (sequence.size() <= 1) {
      return;
    }
    std::list<int> left, right;
    std::list<int>::iterator it = sequence.begin();
    std::size_t middle = sequence.size() / 2;
    for (std::size_t i = 0; i < middle; ++i) {
      left.push_back(*it);
      ++it;
    }
    for (std::size_t i = middle; i < sequence.size(); ++i) {
      right.push_back(*it);
      ++it;
    }
    sortWithContainer2(left);
    sortWithContainer2(right);
    sequence.clear();
    std::list<int>::iterator leftIt = left.begin();
    std::list<int>::iterator rightIt = right.begin();
    while (leftIt != left.end() && rightIt != right.end()) {
      if (*leftIt <= *rightIt) {
        sequence.push_back(*leftIt);
        ++leftIt;
      } else {
        sequence.push_back(*rightIt);
        ++rightIt;
      }
    }
    while (leftIt != left.end()) {
      sequence.push_back(*leftIt);
      ++leftIt;
    }
    while (rightIt != right.end()) {
      sequence.push_back(*rightIt);
      ++rightIt;
    }
  }
}
#endif // PMERGEME_HPP
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <ctime>
#include "PmergeMe.hpp"
int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Error: No input sequence provided." << std::endl;
    return 1;
  }
  // Extract the positive integer sequence from command-line arguments
  std::vector<int> sequence;
  for (int i = 1; i < argc; ++i) {
    int num;
    std::stringstream ss(argv[i]);
    if (!(ss >> num) || num <= 0) {
      std::cerr << "Error: Invalid input sequence." << std::endl;
      return 1;
    }
    sequence.push_back(num);
  }
  std::cout << "Before:";
  for (const auto& num : sequence) {
    std::cout << " " << num;
  }
  std::cout << std::endl;
  // Create instances of the two containers
  std::vector<int> container1(sequence);
  std::list<int> container2(sequence.begin(), sequence.end());
  // Sort the sequence using container 1 (vector)
  PmergeMe::sortWithContainer1(container1);
  // Sort the sequence using container 2 (list)
  PmergeMe::sortWithContainer2(container2);
  std::cout << "After:";
  for (const auto& num : container1) {
    std::cout << " " << num;
  }
  std::cout << std::endl;
  // Measure the time taken by each container
  clock_t start1 = std::clock();
  PmergeMe::sortWithContainer1(container1);
  clock_t end1 = std::clock();
  clock_t start2 = std::clock();
  PmergeMe::sortWithContainer2(container2);
  clock_t end2 = std::clock();
  double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;
  double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;
  std::cout << "Time to process a range of " << sequence.size() << " elements with std::vector: "
            << time1 << " sec" << std::endl;
  std::cout << "Time to process a range of " << sequence.size() << " elements with std::list: "
            << time2 << " sec" << std::endl;
  return 0;
}
*/

#endif
