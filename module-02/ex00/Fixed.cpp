/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:47:41 by mtawil            #+#    #+#             */
/*   Updated: 2026/05/01 11:57:02 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_bits(0){
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    if (this != &src) {
        this->raw_bits = src.raw_bits;
    }
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->raw_bits = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) {
    std::cout << "getRawBits member function called" << std::endl;
    return raw_bits;    
}
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    raw_bits = raw;
}