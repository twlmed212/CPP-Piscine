/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:48:01 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/19 17:08:21 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// megaphone.cpp
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        std::string s = argv[i];
        for (size_t j = 0; j < s.length(); j++)
            s[j] = std::toupper(s[j]);
        if (i > 1)
            std::cout << " ";
        std::cout << s;
    }
    std::cout << std::endl;
    return 0;
}