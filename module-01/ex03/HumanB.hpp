/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:19:13 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/24 12:29:22 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(std::string nm);
    void setWeapon(Weapon wpn);
    void attack();
};

#endif