/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:40:41 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/19 15:51:13 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

int main()
{
	const Animal *l = new Animal();
	const Animal *a = new Cat();

	std::cout << l->getType() << std::endl;
	std::cout << a->getType() << std::endl;
	l->makeSound();
	a->makeSound();
}