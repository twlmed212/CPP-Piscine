/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:41:58 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/23 12:06:52 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::Zombie(std::string n) : name(n) {}
Zombie::~Zombie(){}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string n){
    name = n;
}