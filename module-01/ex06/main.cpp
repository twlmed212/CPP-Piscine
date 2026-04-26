/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:28:51 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/26 21:58:33 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }
    
    int level = getType(argv[1]);
    Harl harl;
        
    switch (level) {
        case 0:
            harl.complain("DEBUG");
            /* fall through */
        case 1:
            harl.complain("INFO");
            /* fall through */
        case 2:
            harl.complain("WARNING");
            /* fall through */
        case 3:
            harl.complain("ERROR");
            break;            
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}