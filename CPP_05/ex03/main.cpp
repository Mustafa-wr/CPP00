/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:51:57 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:48:38 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
int main()
{
    Intern intern;
	Bureaucrat all("hiii", 150);

    Form *shrubberyForm = intern.makeForm("shrubbery creation", "garden");
    Form *robotomyForm = intern.makeForm("robotomy request", "John Doe");
    Form *presidentialForm = intern.makeForm("presidential pardon", "Alice");

	// (void)robotomyForm;
	// (void)shrubberyForm;
	// (void)presidentialForm;
	// try
	// {
	// 	shrubberyForm->execute(all);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	
    delete shrubberyForm;
    delete robotomyForm;
    delete presidentialForm;

    return 0;
}
