/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:02:59 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/25 16:42:48 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Losers.hpp"

Data::Data(char **av) : origianl_file(av[1]), occurance_str(av[2]), replacment_str(av[3])
{
    replaced_file = origianl_file + ".replace";
}

void Data::replace(std::string s)
{
    size_t index = 0;
    
    result = s;
    if (!occurance_str.empty())
    {
        while ((index = result.find(occurance_str, index)) != std::string::npos)
        {
            result = result.substr(0, index) + replacment_str + result.substr(index + occurance_str.length(), result.length());
            index += replacment_str.length();
        }
    }
}

const char* Data::getOrigianlF(){
    return origianl_file.c_str();
}

const char* Data::getReplacedF(){
    return replaced_file.c_str();
}

std::string Data::getResult(){return result;}