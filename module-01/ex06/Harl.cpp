/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:29:13 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/26 21:48:18 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};

void Harl::debug( void ) {
    std::cout << "[ DEBUG ] \n" 
                "I love having extra bacon for my "
                "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
                << std::endl;
}
void Harl::info( void ) {
    std::cout << "[ INFO ] \n"
                 "I cannot believe adding extra bacon costs more money. \n"
                 "You didn't put enough bacon in my burger! If you did, \n"
                 "I wouldn't be asking for more!\n" << std::endl;
}
void Harl::warning( void ) {
    std::cout << "[ WARNING ] \n"
                "I think I deserve to have some extra bacon for free. \n"
                "I've been coming for years, whereas you started "
                "working here just last month.\n" << std::endl;
}
void Harl::error( void ) {
    std::cout << "[ ERROR ] \n"
                "This is unacceptable! I want to speak to the manager now.\n"
                << std::endl;
}

void Harl::complain(int level ){
    void (Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = level; i < 4; i++) {
        (this->*funcs[i])();
        
    }
}

int getType(std::string s){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        if (s == levels[i])
            return (i);
    return (-1);
}
