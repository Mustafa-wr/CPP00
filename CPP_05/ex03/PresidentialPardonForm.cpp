/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:52:03 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:38:27 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form("Presidential Pardon Form", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
: Form(src), _target(src._target)
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &Or)
{
    _target = Or._target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > Form::getGradeRequiredToExecute())
    {
        throw Form::GradeTooLowException();
    }
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
