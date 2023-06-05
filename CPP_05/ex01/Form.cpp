/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:03:04 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/05 20:46:30 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _gradeRequiredToSign(0), _gradeRequiredToExecute(0)
{
	std::cout << "default form constructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	s = rhs.s;
	return (*this);
}

Form::Form(const Form &src) : _gradeRequiredToSign(src._gradeRequiredToSign),
 	_gradeRequiredToExecute(src._gradeRequiredToExecute)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout << "form destructor called" << std::endl;
}

const std::string	&Form::getName() const
{
	return _name;
}

bool Form::get_isSigned() const
{
	return s;
}

int Form::getGradeRequiredToSign() const
{
	return _gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const
{
	return _gradeRequiredToExecute;
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	
	if(bureaucrat.getGrade() <= _gradeRequiredToSign)
	{
		if(s == true)
			std::cout << "the grade is already signed" << std::endl;
		else
		{
			s = true;
			std::cout << "the grade has been signed" << std::endl;
		}
	}
	else
		throw(GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

Form::Form(const std::string &name, int gradeRequiredToSign, int gradeRequiredToExecute) :
_name(name), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
}