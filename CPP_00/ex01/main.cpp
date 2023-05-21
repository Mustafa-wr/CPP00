/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:28:38 by mradwan           #+#    #+#             */
/*   Updated: 2023/04/10 19:28:07 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
# include <iostream>
# include <string>

int main(void)
{
    PhoneBook phoneBook;
    std::string choice;

    while (true)
    {
        std::cout << "Enter the command >";
		
        if(std::getline(std::cin >> std::ws, choice))
		{
			if (choice == "ADD")
				phoneBook.addContact();
			else if (choice == "SEARCH")
				phoneBook.searchContacts();
			else if (choice == "EXIT")
			{
				std::cout << "Goodbye!" << std::endl;
				break ;
			}
			else
				std::cout << "Invalid choice, please try again." << std::endl;
			std::cout << std::endl;
		}
		else
			return (0);
    }
    return (0);
}
