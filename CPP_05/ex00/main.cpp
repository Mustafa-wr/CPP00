/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:19:14 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/03 14:30:28 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("vv", 4);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
		
		bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
        // Attempt to create a bureaucrat with an invalid grade
        // Bureaucrat invalidBureaucrat("Invalid", 200);
    }
	
    catch (std::exception & e)
    {
        std::cout << "Exception caught: " << e.what();
    }

    return 0;
}
