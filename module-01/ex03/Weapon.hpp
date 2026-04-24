/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:19:17 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/24 12:04:29 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

private:
    std::string type;
public:
    Weapon();
    Weapon(std::string tp);
    const std::string& getType();
    void setType(std::string tp);
};

#endif