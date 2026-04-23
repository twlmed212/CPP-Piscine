/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:42:01 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/22 15:45:02 by mtawil           ###   ########.fr       */
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
    Zombie(std::string n);
    ~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
    
#endif