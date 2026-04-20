/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:21 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/20 16:08:21 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     count;
    int     oldest;
    std::string getField(std::string s);
    void    print(std::string s);

public:
    PhoneBook() : count(0), oldest(0) {}
    void    addContact();
    void    searchContact();
};

#endif
