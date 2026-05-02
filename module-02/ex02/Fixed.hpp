/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:47:40 by mtawil            #+#    #+#             */
/*   Updated: 2026/05/02 13:00:21 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed {
    private:
        int                 raw_bits;
        static const int    fractional = 8;
    public:
        Fixed();
        Fixed(const int& n);
        Fixed(const float& n);
        Fixed(const Fixed& src);
        Fixed& operator=(const Fixed& other);
        
        bool operator>(const Fixed&other) const ;
        bool operator<(const Fixed&other) const ;
        bool operator>=(const Fixed&other) const ;
        bool operator<=(const Fixed&other) const ;
        bool operator==(const Fixed&other) const ;
        bool operator!=(const Fixed&other) const ;

        Fixed operator+(const Fixed&other) const;
        Fixed operator-(const Fixed&other) const;
        Fixed operator*(const Fixed&other) const;
        Fixed operator/(const Fixed&other) const;
        
        Fixed& operator++(void);
        Fixed operator++(int n);
        Fixed& operator--(void);
        Fixed operator--(int n);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);

        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator<<(std::ostream & out, const Fixed & fixed);


#endif