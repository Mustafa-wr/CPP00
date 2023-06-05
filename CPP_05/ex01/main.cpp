/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:19:14 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/05 21:05:13 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
		Bureaucrat b("ahmad", 70);
		Form a("a", 50, 50);
		a.beSigned(b);
		a.beSigned(b);
        // Bureaucrat bureaucrat("", 4);
        // std::cout << bureaucrat << std::endl;

        // bureaucrat.incrementGrade();
        // std::cout << bureaucrat << std::endl;

        // bureaucrat.decrementGrade();
        // std::cout << bureaucrat << std::endl;

        // Attempt to create a bureaucrat with an invalid grade
        // Bureaucrat invalidBureaucrat("Invalid", 200);
    }
	
    catch (std::exception & e)
    {
        std::cout << "Exception caught: " << e.what();
    }

    return 0;
}
