/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:26:52 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/14 11:46:33 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        std::string tmp = argv[i];
        for (int j = 0; j < (int)tmp.length(); j++)
        {
            char tmx = toupper(argv[i][j]);
            std::cout << tmx;
        }
        if (i < argc - 1)
            std::cout << " ";
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}