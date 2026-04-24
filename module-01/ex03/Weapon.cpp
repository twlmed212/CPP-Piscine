/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:19:16 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/24 17:58:22 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string tp): type(tp){};

const std::string& Weapon::getType(){
    return type;
}

void Weapon::setType(const std::string& tp){
    type = tp;
}