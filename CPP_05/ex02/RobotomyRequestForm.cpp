/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:52:05 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:39:08 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
Form("RobotomyRequest Form", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
: Form(src), _target(src._target)
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &Or)
{
    _target = Or._target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > Form::getGradeRequiredToExecute())
    {
        throw Form::GradeTooLowException();
    }
	else
    	robotomize();
}

void RobotomyRequestForm::robotomize() const
{
    std::cout << "Drilling noises..." << std::endl;

    srand(time(NULL));
    int success = rand() % 2;
    if (success)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed for " << _target << std::endl;
}
