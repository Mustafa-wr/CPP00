/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:40:41 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/20 16:31:03 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong_cat.hpp"

int main()
{
	const Animal *a = new Cat();
	const Animal *d = new Dog();

	std::cout << a->getType() << std::endl;
	std::cout << d->getType() << std::endl;

	a->makeSound();
	d->makeSound();

	delete a;
	delete d;

	
}

