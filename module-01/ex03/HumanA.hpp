/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:19:14 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/27 10:39:16 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
    std::string name;
    Weapon weapon;
public:
    HumanA(std::string nm, Weapon wpn);
    void attack();
};

#endif