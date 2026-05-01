/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:47:40 by mtawil            #+#    #+#             */
/*   Updated: 2026/05/01 18:23:13 by mtawil           ###   ########.fr       */
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
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream & operator<<(std::ostream & out, const Fixed & fixed);

#endif