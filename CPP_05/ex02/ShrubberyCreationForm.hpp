/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:52:08 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/11 15:19:18 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <fstream>

class ShrubberyCreationForm : public Form{

private:
	std::string _target;
	void createShrubbery() const;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &Or);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &executor) const;
	ShrubberyCreationForm(const std::string &target);
};

#endif
