/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:19:52 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/11 15:25:29 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Form;

class Bureaucrat{

private:
	const std::string	_name;
	int 				_grade;

public:
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=( Bureaucrat const &Or);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();

	void incrementGrade();
	void decrementGrade();

	const std::string	getName() const;
	int 				getGrade() const;

	void	signForm(Form &form);

	void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B);

#endif
