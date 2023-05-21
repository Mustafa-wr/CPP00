/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:43:22 by mradwan           #+#    #+#             */
/*   Updated: 2023/05/21 18:43:44 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <chrono>
#include <ctime>

PhoneBook::PhoneBook() : m_nbContacts(0)
{
}

void PhoneBook::addContact()
{
    if (m_nbContacts == 8)
        std::cout << "Phone book is full. Overwriting the oldest contact." << std::endl;

    Contact contact;
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter the first name: ";
    if (!(std::getline(std::cin >> std::ws, firstName)))
		return ;

    std::cout << "Enter the last name: ";
    if(!(std::getline(std::cin >> std::ws, lastName)))
		return ;

    std::cout << "Enter the nickname: ";
    if(!(std::getline(std::cin >> std::ws, nickname)))
		return ;

    std::cout << "Enter the phone number: ";
    if(!(std::getline(std::cin >> std::ws, phoneNumber)))
		return ;

    std::cout << "Enter the darkest secret: ";
    if(!(std::getline(std::cin >> std::ws, darkestSecret)))
		return ;

    contact.setFirstName(firstName);
    contact.setLastName(lastName);
    contact.setNickname(nickname);
    contact.setPhoneNumber(phoneNumber);
    contact.setDarkestSecret(darkestSecret);
    m_contacts[m_nbContacts % 8] = contact;
    m_nbContacts++;
}

void PhoneBook::searchContacts()
{
    if (m_nbContacts == 0)
    {
        std::cout << "The phone book is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index"
              << "|"
              << std::setw(10) << "First name"
              << "|"
              << std::setw(10) << "Last name"
              << "|"
              << std::setw(10) << "Nickname"
              << "|" << std::endl;

    for (int i = 0; i < m_nbContacts; i++)
    {
		if(i == 8)
		{
			 break;
		}
        std::string firstName = m_contacts[i].getFirstName();
        std::string lastName = m_contacts[i].getLastName();
        std::string nickname = m_contacts[i].getNickname();

        if (firstName.length() > 9) {
            firstName.replace(9, 1, ".");
            firstName = firstName.substr(0, 10);
        }

        if (lastName.length() > 9) {
            lastName.replace(9, 1, ".");
            lastName = lastName.substr(0, 10);
        }

        if (nickname.length() > 9) {
            nickname.replace(9, 1, ".");
            nickname = nickname.substr(0, 10);
        }
		
        std::cout << std::setw(10) << i
                  << "|"
                  << std::setw(10) << firstName
                  << "|"
                  << std::setw(10) << lastName
                  << "|"
                  << std::setw(10) << nickname
                  << "|" << std::endl;
    }

    int index;
    std::cout << "Enter the index of the contact you want to view: ";
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= 9)
    {
        std::cout << "Invalid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }

    std::cout << "First name: " << m_contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << m_contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << m_contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << m_contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << m_contacts[index].getDarkestSecret() << std::endl;
}
