/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:51:59 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 14:53:31 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

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
	virtual ~Form();

	const std::string &getName() const;
	bool get_isSigned() const;
	int getGradeRequiredToSign() const;
	int getGradeRequiredToExecute() const;

	void beSigned(const Bureaucrat &bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream &operator<<(std::ostream &out, const Form &F);

#endif
