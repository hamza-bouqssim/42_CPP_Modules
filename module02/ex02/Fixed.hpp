/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:09:09 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/09 23:25:26 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed{
    
    int fixed_point;
    static const int f_bits = 8;
    public:
    
        //constructors:
        Fixed();
        Fixed(const int _nmbr);
        Fixed(const float _nmbr);
        Fixed(const Fixed &_Fixed);
        ~Fixed();
        
        //copy assignement operator overloading:
        Fixed &operator=(const Fixed &_Fixed);
        
        //comparison operators:
        bool operator >(const Fixed &_Fixed);
        bool operator <(const Fixed &_Fixed);
        bool operator >=(const Fixed &_Fixed);
        bool operator <=(const Fixed &_Fixed);
        bool operator ==(const Fixed &_Fixed);
        bool operator !=(const Fixed &_Fixed);
        
        //arithmetic operators:
        Fixed operator +(const Fixed &_Fixed);
        Fixed operator -(const Fixed &_Fixed);
        Fixed operator *(const Fixed &_Fixed);
        Fixed operator /(const Fixed &_Fixed);
        
        //prefix operators
        Fixed &operator ++();
        Fixed &operator --();
        
        //postfix operator
        Fixed operator ++(int);
        Fixed operator --(int);
        
        //member funcs:
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits() const;
        void setRawBits(int const raw);
        static Fixed min(Fixed _Fixed, Fixed _Fixed1);
        static Fixed max(Fixed _Fixed, Fixed _Fixed1);
};
std::ostream& operator << (std::ostream &output, const Fixed &_fixed);
#endif