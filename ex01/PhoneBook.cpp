/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:25 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/20 16:08:20 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

static std::string getField(std::string s)
{
    std::string input;
    while (true)
    {
        std::cout << s;
        std::getline(std::cin, input);
        if (!input.empty())
            return input;
        std::cout << "Field cannot be empty. Try again.\n";
    }
}

void PhoneBook::print(std::string s)
{
    if (s.length() > 10)
        s = s.substr(0, 9) + ".";
    std::cout << std::setw(10) << std::right << s << "|";
}

void PhoneBook::addContact()
{
    int idx = oldest % 8;
    contacts[idx].setFirstName(getField("First name: "));
    contacts[idx].setLastName(getField("Last name: "));
    contacts[idx].setNickName(getField("Nickname: "));
    contacts[idx].setPhoneNumber(getField("Phone number: "));
    contacts[idx].setDarkestSecret(getField("Darkest secret: "));
    oldest++;
    if (count <= 7)
        count++;
    std::cout << "Contact saved!\n";
}

void PhoneBook::searchContact() 
{
    if (count == 0)
    {
        std::cout << "PhoneBook is empty.\n";
        return;
    }
    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << "|" << "\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|";
        print(contacts[i].getFirstName());
        print(contacts[i].getLastName());
        print(contacts[i].getNickname());
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
    if (idx >= count)
    {
        std::cout << "Index out of range.\n";
        return;
    }
    std::cout << "First name:     " << contacts[idx].getFirstName() << "\n"
              << "Last name:      " << contacts[idx].getLastName() << "\n"
              << "Nickname:       " << contacts[idx].getNickname() << "\n"
              << "Phone number:   " << contacts[idx].getPhoneNumber() << "\n"
              << "Darkest secret: " << contacts[idx].getDarkestSecret() << "\n";
}