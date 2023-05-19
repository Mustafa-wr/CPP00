/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:27:42 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/19 17:28:46 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{	
public:
	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &Or);
	~Dog();

	void makeSound() const;
};

#endif