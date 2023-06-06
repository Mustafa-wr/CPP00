/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:19:14 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/06 16:10:55 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// int main()
// {
//     try
//     {
// 		Bureaucrat b("ahmad", 70);
// 		Form a("a", 50, 50);
		
// 		b.signForm(a);
//     }
//     catch (std::exception & e)
//     {
//         std::cout << "Exception caught: " << e.what();
//     }

//     return 0;
// }

// #include <iostream>
// #include "Bureaucrat.hpp"
// #include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("John Doe", 50);
        Form form("FormA", 50, 75);

        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;

        bureaucrat.signForm(form);
        form.beSigned(bureaucrat);

        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

