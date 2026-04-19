/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:25 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/19 17:34:13 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string s)
{
	first_name = s;
}

void Contact::setLastName(std::string s)
{
	last_name = s;

}
void Contact::setNickname(std::string s)
{
	nickname = s;
}

void Contact::setPhoneNumber(std::string s)
{
	phone_number = s;
}

void Contact::setDarkestSecret(std::string s)
{
	darkset_secret = s;
}

std::string Contact::getFirstName()
{
	return first_name;
}

std::string Contact::getLastName()
{
	return last_name;
}

std::string Contact::getNickname()
{
	return nickname;
}

std::string Contact::getPhoneNumber()
{
	return phone_number;
}

std::string Contact::getDarkestSecret()
{
	return darkset_secret;
}