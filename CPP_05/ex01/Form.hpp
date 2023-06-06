/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:02:56 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/06 15:46:08 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool s;
	const int _gradeRequiredToSign;
	const int _gradeRequiredToExecute;

public:
	class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

	Form(const std::string &name, int gradeRequiredToSign, int gradeRequiredToExecute);

	Form();
	Form(const Form &src);
	Form &operator=(const Form &rhs);
	~Form();

	const std::string &getName() const;
	bool get_isSigned() const;
	int getGradeRequiredToSign() const;
	int getGradeRequiredToExecute() const;

	void beSigned(const Bureaucrat &bureaucrat);

};

std::ostream &operator<<(std::ostream &out, const Form &F);

#endif
