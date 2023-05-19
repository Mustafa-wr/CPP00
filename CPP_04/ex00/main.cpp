/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:40:41 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/19 22:35:18 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

/*
Virtual functions should be accessed using a pointer or reference of 
base class type to achieve runtime polymorphism.
*/

int main()
{
	// const Animal *l = new Animal();
	// const Animal *a = new Cat();
	// const Animal *d = new Dog();

	// std::cout << l->getType() << std::endl;
	// std::cout << a->getType() << std::endl;
	// std::cout << d->getType() << std::endl;
	// l->makeSound();
	// a->makeSound();
	// d->makeSound();

	// delete l;
	// delete a;
	// delete d;

	Cat a;
	Cat tmp = a;
}

