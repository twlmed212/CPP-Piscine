/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:47:41 by mtawil            #+#    #+#             */
/*   Updated: 2026/05/08 21:06:01 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_bits(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int& n) : raw_bits(n << fractional) {
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float& n) : raw_bits(roundf(n * (1 << fractional))) {
    std::cout << "Float constructor called" << std::endl;
}
        
Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
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

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return raw_bits;    
}
void Fixed::setRawBits(int const raw) {
    this->MakeSound();
    std::cout << "setRawBits member function called" << std::endl;
    raw_bits = raw;
}

float Fixed::toFloat(void) const {
    return ((float)raw_bits / (1 << fractional));

}
int Fixed::toInt(void) const {
    return (raw_bits >> fractional);
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed) {
    out << fixed.toFloat();
    return out;
}


bool Fixed::operator>(const Fixed&other) const {
    return (this->raw_bits > other.raw_bits);
}
bool Fixed::operator<(const Fixed&other) const {
    return (this->raw_bits < other.raw_bits);
}
bool Fixed::operator>=(const Fixed&other) const {
    return (this->raw_bits >= other.raw_bits);
}
bool Fixed::operator<=(const Fixed&other) const {
    return (this->raw_bits <= other.raw_bits);
}
bool Fixed::operator==(const Fixed&other) const {
    return (this->raw_bits == other.raw_bits);
}
bool Fixed::operator!=(const Fixed&other) const {
    return (this->raw_bits != other.raw_bits);
}

Fixed Fixed::operator+(const Fixed&other) const {
    return (Fixed(this->toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(const Fixed&other) const {
    return (Fixed(this->toFloat()  - other.toFloat()));
}
Fixed Fixed::operator*(const Fixed&other) const {
    return (Fixed(this->toFloat()  * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed&other) const {
    return (Fixed(this->toFloat()  / other.toFloat()));
}

Fixed& Fixed::operator++(void) {
    this->raw_bits += 1;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->raw_bits += 1;
    return (tmp);    
}

Fixed& Fixed::operator--(void) {
    this->raw_bits -= 1;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(this->raw_bits);
    this->raw_bits -= 1;
    return (tmp);    
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

void Sounds::MakeSound() {
    std::cout << "Original" <<std::endl;
}

Sounds::Sounds() {
    std::cout << "Sounds Create" << std::endl;
}
Sounds::~Sounds() {
    std::cout << "Sounds Destruct Called" << std::endl;
}