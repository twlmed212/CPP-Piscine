/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:19:11 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/24 12:14:01 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nm) : name(nm) {};

void HumanB::attack() {
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon wpn){
    *weapon = wpn;
}