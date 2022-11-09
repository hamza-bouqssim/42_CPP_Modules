/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:23:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/09 06:01:45 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//constructors:
Fixed::~Fixed(){
}

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::Fixed(int _integer)
{
	this->fixed_point = _integer << this->f_bits;
}

Fixed::Fixed(float _float)
{
    this->fixed_point = roundf(_float * (1 << this->f_bits));
}

Fixed::Fixed(const Fixed &_Fixed)
{
    *this = _Fixed;
}


//getters && setters:

int Fixed::getRawBits() const
{
    return this->fixed_point;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

int Fixed::toInt(void) const
{
    return (this->fixed_point >> this->f_bits);
}

float Fixed::toFloat(void) const
{
    return((float)this->fixed_point / 256);
}
//overloading  operators:
//copy assignement operator:
Fixed& Fixed::operator=(const Fixed &_Fixed)
{
    this->fixed_point = _Fixed.getRawBits();
    return *this;
}

//Comparison Operators:
bool Fixed::operator >(const Fixed &_Fixed)
{
    return this->getRawBits() > _Fixed.getRawBits();
}
bool Fixed::operator <(const Fixed &_Fixed)
{
    return this->getRawBits() < _Fixed.getRawBits();
}
bool Fixed::operator >=(const Fixed &_Fixed)
{
    return this->getRawBits() >= _Fixed.getRawBits();
}
bool Fixed::operator <=(const Fixed &_Fixed)
{
    return this->getRawBits() <= _Fixed.getRawBits();
}
bool Fixed::operator==(const Fixed &_Fixed)
{
    return this->getRawBits() == _Fixed.getRawBits();
}
bool Fixed::operator !=(const Fixed &_Fixed)
{
    return this->getRawBits() != _Fixed.getRawBits();
}

//Arithmetic operators:
Fixed &Fixed::operator +(const Fixed &_Fixed)
{
    this->toFloat() + _Fixed.toFloat();
    return *this;
}
Fixed &Fixed::operator -(const Fixed &_Fixed)
{
    this->toFloat() - _Fixed.toFloat();
    return *this;
}
Fixed &Fixed::operator *(const Fixed &_Fixed)
{
    this->toFloat() * _Fixed.toFloat();
    return *this;
}
Fixed &Fixed::operator /(const Fixed &_Fixed)
{
    this->toFloat() / _Fixed.toFloat();
    return *this;
}
Fixed &Fixed::operator +(const Fixed &_Fixed)
{
    this->toFloat() + _Fixed.toFloat();
    return *this;
}

//prefix:
Fixed &Fixed::operator ++()
{
    this->fixed_point++;
    return *this;
}
Fixed &Fixed::operator --()
{
    this->fixed_point--;
    return *this;
}

//postfix:
Fixed &Fixed::operator++(int)
{
    Fixed &temp = *this;
    this->fixed_point++;
    return *this;
}
Fixed &Fixed::operator--(int)
{
    Fixed &temp = *this;
    this->fixed_point--;
    return *this;
}

//overloading insertion operator:
std::ostream& operator << (std::ostream &output, const Fixed &_fixed)
{
    output << _fixed.toFloat();
    return output;
}