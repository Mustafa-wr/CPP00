/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:20:05 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/06 14:39:12 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Deafault constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &Or)
{
	std::cout << "Bureaucrat copy operator constructor called" << std::endl;
	_grade = Or._grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat args constructor called" << std::endl;
	if(grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

void Bureaucrat::decrementGrade()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::incrementGrade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what();
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B)
{
	out << B.getName() << " bureaucrat grade is " << B.getGrade();
    return out;
}
