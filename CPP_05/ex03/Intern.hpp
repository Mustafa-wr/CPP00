/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:53:33 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/11 20:10:19 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>

class Intern{

private:
	Form *createSB(const std::string &target);
    Form *createRB(const std::string &target);
    Form *createPD(const std::string &target);
	
public:
	Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &Or);
	~Intern();

	Form	*makeForm(std::string name, std::string target);
};

#endif
