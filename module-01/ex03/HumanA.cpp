/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:19:09 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/24 11:59:19 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& wpn) : name(nm), weapon(wpn) {};

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}