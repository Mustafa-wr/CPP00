/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:34:07 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/19 22:43:28 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "cat";
	brain = new Brain;
	std::cout << "cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	this->brain = src.brain;
	this->type = src.type;
	brain = new Brain(*src.brain);
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &Or)
{
	this->type = Or.type;
	*brain = *Or.brain;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound" << std::endl;
}



/*
#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
    _brain = new Brain(*src._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
        *_brain = *rhs._brain;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}
*/