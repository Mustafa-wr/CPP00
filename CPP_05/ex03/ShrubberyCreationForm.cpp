/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:52:08 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:38:41 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
Form("ShrubberyCreation Form", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
: Form(src), _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Or)
{
    _target = Or._target;
	return (*this);
}

void ShrubberyCreationForm::createShrubbery() const
{
    std::string filename = _target + "_shrubbery";
    std::ofstream outfile(filename.c_str());

    if (outfile)
    {
        outfile << "          v\n"
                   "         >X<\n"
                   "          A\n"
                   "         d$b\n"
                   "       .d\\$$b.\n"
                   "     .d$i$$\\$$b.\n"
                   "        d$$@b\n"
                   "       d\\$$$ib\n"
                   "     .d$$$\\$$$b\n"
                   "   .d$$@$$$$\\$$ib.\n"
                   "        d$$i$$b\n"
                   "       d\\$$$$@$b\n"
                   "     .d$@$$\\$$$$$@b.\n"
                   "   .d$$$$i$$$\\$$$$$$b.\n"
                   "        d$$$$$$@b\n"
                   "       d\\$$$$$$$ib\n"
                   "     .d$$$$@$$$$$\\$$b.\n"
                   "   .d$$$i$$$\\$$$$$$\n"
                   "        d$$$$$$$@\n"
                   "       d\\$$$$$$$/\n"
                   "          >$$$$$/\n"
                   "         /d$$$$$$/\n"
                   "         .d$$$$$$/.\n"
                   "         </$$$$$$/.\n"
                   "           $$$$$$/\n"
                   "           $$$$$.";
        outfile.close();
        std::cout << "Shrubbery created: " << filename << std::endl;
    }
    else
    {
        std::cout << "Cannot create shrubbery\n";
    }
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > Form::getGradeRequiredToExecute())
    {
        throw Form::GradeTooLowException();
    }
	else
		createShrubbery();
}
