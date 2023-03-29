/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:43:22 by mradwan           #+#    #+#             */
/*   Updated: 2023/03/29 02:02:35 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_nbContacts(0)
{
}

void PhoneBook::addContact()
{
    if (m_nbContacts == 8)
    {
        std::cout << "Phone book is full. Overwriting the oldest contact." << std::endl;
        m_nbContacts = 7; // set the index to the last contact
    }

    Contact contact;
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter the first name: ";
    std::getline(std::cin >> std::ws, firstName);

    std::cout << "Enter the last name: ";
    std::getline(std::cin >> std::ws, lastName);

    std::cout << "Enter the nickname: ";
    std::getline(std::cin >> std::ws, nickname);

    std::cout << "Enter the phone number: ";
    std::getline(std::cin >> std::ws, phoneNumber);

    std::cout << "Enter the darkest secret: ";
    std::getline(std::cin >> std::ws, darkestSecret);

    contact.setFirstName(firstName);
    contact.setLastName(lastName);
    contact.setNickname(nickname);
    contact.setPhoneNumber(phoneNumber);
    contact.setDarkestSecret(darkestSecret);

    m_contacts[m_nbContacts % 8] = contact; // use modulo operator to overwrite the oldest contact
    m_nbContacts++;
}


void PhoneBook::searchContacts() const
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
        std::cout << std::setw(10) << i
                  << "|"
                  << std::setw(10) << m_contacts[i].getFirstName().substr(0, 10)
                  << "|"
                  << std::setw(10) << m_contacts[i].getLastName().substr(0, 10)
                  << "|"
                  << std::setw(10) << m_contacts[i].getNickname().substr(0, 10)
                  << "|" << std::endl;
    }

    int index;
    std::cout << "Enter the index of the contact you want to view: ";
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= m_nbContacts)
    {
        std::cout << "Invalid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    std::cout << "First name: " << m_contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << m_contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << m_contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << m_contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << m_contacts[index].getDarkestSecret() << std::endl;
}
