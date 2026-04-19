/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:21 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/19 17:37:54 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     count;
    int     oldest;

    void    printField(std::string field);

public:
    PhoneBook::PhoneBook() : count(0), oldest(0) {}
    void    addContact();
    void    searchContact();
};

#endif
