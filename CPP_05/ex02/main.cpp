/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:51:57 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:40:50 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat bureaucrat("John Doe", 5);

    // ShrubberyCreationForm shrubberyForm("garden");
    RobotomyRequestForm robotomyForm("John Doe");
    // PresidentialPardonForm presidentialForm("Alice");

    // bureaucrat.signForm(shrubberyForm);
    // bureaucrat.signForm(robotomyForm);
    // bureaucrat.signForm(presidentialForm);

    // bureaucrat.executeForm(shrubberyForm);
    bureaucrat.executeForm(robotomyForm);
    // bureaucrat.executeForm(presidentialForm);

    return 0;
}
