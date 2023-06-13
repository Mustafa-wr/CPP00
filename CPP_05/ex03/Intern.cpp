/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:53:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:17:38 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern	&Intern::operator=(const Intern &Or)
{
	(void)Or;
	return (*this);
}

Form *Intern::createSB(const std::string &target)
{
	std::cout << "intern creates ShrubberyCreationForm\n";
    return new ShrubberyCreationForm(target);
}

Form *Intern::createRB(const std::string &target)
{
	std::cout << "intern creates RobotomyRequestForm\n";
    return new RobotomyRequestForm(target);
}

Form *Intern::createPD(const std::string &target)
{
	std::cout << "intern creates PresidentialPardonForm\n";
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Form *form = NULL;
	
	Form*(Intern::*funcPtr[])(const std::string &) = {
		&Intern::createPD,
		&Intern::createRB,
		&Intern::createSB
	};

	std::string names[] = {
		"presidential pardon", "robotomy request", "shrubbery creation"
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (names[i] == name)
			return (this->*(funcPtr[i]))(target);
	}
	std::cout << "Error Unknown form name" << std::endl;

    return form;
}
