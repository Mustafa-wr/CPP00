/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:28:38 by mradwan           #+#    #+#             */
/*   Updated: 2023/03/29 01:54:00 by mradwan          ###   ########.fr       */
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
        // std::cout << "2. Display all contacts" << std::endl;
        // std::cout << "3. Exit" << std::endl;
        // std::cout << "Enter your choice: ";

        std::cin >> choice;

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
    return (0);
}

// int	main(void)
// {
// 	PhoneBook 	ph1;
// 	std::string	str;

// 	while (str != "EXIT")
// 	{
// 		std::cout << "Enter a command > ";
// 		std::getline(std::cin, str);
// 		if (str == "ADD")
// 			ph1.addContact();
// 		else if (str == "SEARCH")
// 			ph1.searchContacts();
// 		if (std::cin.eof())
// 		{
// 			std::cout << std::endl;
// 			return (0);
// 		}
// 	}
// 	return (0);
// }
