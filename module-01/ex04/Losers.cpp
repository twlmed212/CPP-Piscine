/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:02:59 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/25 16:49:05 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Losers.hpp"

Data::Data(char **av) : original(av[1]), occurrence(av[2]), replacement(av[3])
{
    replaced_file = original + ".replace";
}

void Data::replace(std::string s)
{
    size_t index = 0;
    
    result = s;
    if (!occurrence.empty())
    {
        while ((index = result.find(occurrence, index)) != std::string::npos)
        {
            result = result.substr(0, index) + replacement + result.substr(index + occurrence.length(), result.length());
            index += replacement.length();
        }
    }
}

const char* Data::getOriginalF(){
    return original.c_str();
}

const char* Data::getReplacedF(){
    return replaced_file.c_str();
}

std::string Data::getResult(){return result;}