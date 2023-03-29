/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:18:20 by mradwan           #+#    #+#             */
/*   Updated: 2023/03/28 23:25:19 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include "Contact.hpp"

Contact::Contact()
{
}

void Contact::setFirstName(std::string firstName)
{
    m_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    m_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    m_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    m_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
    return m_firstName;
}

std::string Contact::getLastName() const
{
    return m_lastName;
}

std::string Contact::getNickname() const
{
    return m_nickname;
}

std::string Contact::getPhoneNumber() const
{
    return m_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return m_darkestSecret;
}
