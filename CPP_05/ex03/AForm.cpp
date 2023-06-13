/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:51:59 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:20:54 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form() : _gradeRequiredToSign(0), _gradeRequiredToExecute(0)
{
}

Form &Form::operator=(const Form &rhs)
{
	s = rhs.s;
	return (*this);
}

Form::Form(const Form &src) : _gradeRequiredToSign(src._gradeRequiredToSign),
 	_gradeRequiredToExecute(src._gradeRequiredToExecute)
{
	*this = src;
}

Form::~Form()
{
	// std::cout << "no leaaakk\n";
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
_name(name), s(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)

{
	if(_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw GradeTooHighException();
	else if(_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &F)
{
	out << "Form for " << F.getName() << " his grade " << \
		(F.get_isSigned() ? "signed" : "not signed");
	return out; 
}


