/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:21 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/14 13:18:34 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iomanip>
# include "Contact.hpp"
# include <iostream>

class PhoneBook {
    private: Contact contacts[8];
    int count;

    PhoneBook(): count(0) {};
    void ADD() {
        Contact tmp;
        std::cout << "Enter First Name:" << std::endl;
        std::cin >> tmp.first_name;
        std::cout << "Enter Last Name:" << std::endl;
        std::cin >> tmp.last_name;
        std::cout << "Enter NickName:" << std::endl;
        std::cin >> tmp.nickname;
        std::cout << "Enter Phone:" << std::endl;
        std::cin >> tmp.phone_number;
        std::cout << "Enter Secret:" << std::endl;
        std::cin >> tmp.darkset_secret;
        contacts
        // Ask for each field one by one:
        // first name
        // last name
        // nickname
        // phone
        // secret
        // Reject empty input ❗
        // Store it in the phonebook
    }
    void SEARCH() {
        // Step 1: Display table
        // Format EXACTLY like this:
        // |     index|first name| last name|  nickname|
        // Rules:
        // width = 10 characters
        // right aligned
        // truncate long text → replace last char with .
        // Example:
        // |         0|     moham.|      tawil|        mo|
        // Step 2: Ask index
        // Enter index:
        // >
        // If valid → print full contact
        // If invalid → handle error
    }
    void EXIT() {
        
    }
};
#endif