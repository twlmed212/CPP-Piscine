/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:42:01 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/23 11:28:06 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <iostream>

class Zombie {

private:
    std::string name;
public:
    void announce(void);
    Zombie();
    Zombie(std::string n);
    ~Zombie();
    void setName(std::string n);
};

Zombie* zombieHorde( int N, std::string name );

#endif