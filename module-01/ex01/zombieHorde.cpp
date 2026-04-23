/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:32:55 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/22 16:47:12 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N <= 0)
        return (NULL);
    Zombie* zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++){
        zombies[i].setName(name);
    }
    return zombies;
}