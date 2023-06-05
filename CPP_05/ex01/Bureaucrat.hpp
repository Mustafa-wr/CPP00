/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:19:52 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/05 19:53:09 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>

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

	// void	signForm();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &B);

#endif
