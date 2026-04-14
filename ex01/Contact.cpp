/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:46:25 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/14 11:46:26 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Test {
private:
    int a;
    int b;

public:
    Test() : b(2), a(b) {}

    void print() {
        std::cout << "a=" << a << ", b=" << b << std::endl;
    }
};

int main() {
    Test t;
    t.print();
}