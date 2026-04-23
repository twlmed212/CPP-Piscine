/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:49:57 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/23 16:51:03 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &s;
    
    std::string& stringREF = s;

    std::cout << "Address of string variable: " << &s << std::endl;
    std::cout << "Address held by stringPTR:  " << stringPTR << std::endl;
    std::cout << "Address held by stringREF:  " << &stringREF << "\n" << std::endl;

    std::cout << "Value of string variable:   " << s << std::endl;
    std::cout << "Value pointed to by PTR:    " << *stringPTR << std::endl;
    std::cout << "Value pointed to by REF:    " << stringREF << std::endl;

    return 0;
}