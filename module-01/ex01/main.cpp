/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:41:49 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/23 12:06:37 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* zombie = zombieHorde(4, "Foo");

    for (int i = 0; i < 4; i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
}