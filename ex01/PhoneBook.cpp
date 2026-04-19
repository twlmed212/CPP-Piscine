/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:25 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/19 17:37:51 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>


// Truncate to 9 chars + dot if too long, then print right-aligned in 10
void PhoneBook::printField(std::string field) const
{
    if (field.length() > 10)
        field = field.substr(0, 9) + ".";
    std::cout << std::setw(10) << std::right << field << "|";
}

static std::string getField(const std::string &prompt)
{
    std::string input;
    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (!input.empty())
            return input;
        std::cout << "Field cannot be empty. Try again.\n";
    }
}

void PhoneBook::addContact()
{
    int idx = _oldest % 8;
    _contacts[idx].setFirstName(getField("First name: "));
    _contacts[idx].setLastName(getField("Last name: "));
    _contacts[idx].setNickname(getField("Nickname: "));
    _contacts[idx].setPhoneNumber(getField("Phone number: "));
    _contacts[idx].setDarkestSecret(getField("Darkest secret: "));
    _oldest++;
    if (_count < 8)
        _count++;
    std::cout << "Contact saved!\n";
}

void PhoneBook::searchContact() const
{
    if (_count == 0)
    {
        std::cout << "PhoneBook is empty.\n";
        return;
    }
    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << "|" << "\n";
    for (int i = 0; i < _count; i++)
    {
        std::cout << std::setw(10) << i << "|";
        printField(_contacts[i].getFirstName());
        printField(_contacts[i].getLastName());
        printField(_contacts[i].getNickname());
        std::cout << "\n";
    }
    std::cout << "Enter index: ";
    std::string line;
    std::getline(std::cin, line);
    if (line.empty() || line.length() > 1 || line[0] < '0' || line[0] > '7')
    {
        std::cout << "Invalid index.\n";
        return;
    }
    int idx = line[0] - '0';
    if (idx >= _count)
    {
        std::cout << "Index out of range.\n";
        return;
    }
    std::cout << "First name:     " << _contacts[idx].getFirstName() << "\n"
              << "Last name:      " << _contacts[idx].getLastName() << "\n"
              << "Nickname:       " << _contacts[idx].getNickname() << "\n"
              << "Phone number:   " << _contacts[idx].getPhoneNumber() << "\n"
              << "Darkest secret: " << _contacts[idx].getDarkestSecret() << "\n";
}