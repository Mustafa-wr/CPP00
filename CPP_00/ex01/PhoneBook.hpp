/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:05:12 by mradwan           #+#    #+#             */
/*   Updated: 2023/03/28 23:05:13 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>  // for std::numeric_limits
#include <iostream>  // for std::cin and std::cout
#include <iomanip>  // for std::setw

class PhoneBook
{
public:
    PhoneBook();
    void addContact();
    void searchContacts() const;

private:
    Contact m_contacts[8];
    int m_nbContacts;
};

#endif
