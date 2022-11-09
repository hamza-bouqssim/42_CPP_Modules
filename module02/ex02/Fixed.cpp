/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:23:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/09 23:29:03 by hbouqssi         ###   ########.fr       */
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

Fixed::Fixed(int _nmbr)
{
	this->fixed_point = _nmbr << this->f_bits;
}

Fixed::Fixed(float _nmbr)
{
    this->fixed_point = roundf(_nmbr * (1 << this->f_bits));

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
Fixed Fixed::operator +(const Fixed &_Fixed)
{
    return Fixed(this->toFloat() + _Fixed.toFloat());
}

Fixed Fixed::operator -(const Fixed &_Fixed)
{
    return Fixed(this->toFloat() - _Fixed.toFloat());
}

Fixed Fixed::operator *(const Fixed &_Fixed)
{
   return Fixed(this->toFloat() * _Fixed.toFloat());
}

Fixed Fixed::operator /(const Fixed &_Fixed)
{
    return Fixed(this->toFloat() / _Fixed.toFloat());
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
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->fixed_point++;
    return temp;
}
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->fixed_point--;
    return temp;
}

//overloading insertion operator:
std::ostream& operator << (std::ostream &output, const Fixed &_fixed)
{
    output << _fixed.toFloat();
    return output;
}
//Member Functions:

int Fixed::toInt(void) const
{
    return (this->fixed_point >> this->f_bits);
}

float Fixed::toFloat(void) const
{
    return((float)this->fixed_point / 256);
}

Fixed Fixed::max(Fixed _Fixed, Fixed _Fixed1)
{
    if(_Fixed > _Fixed1)
        return _Fixed;
    return _Fixed1;
}

Fixed Fixed::min(Fixed _Fixed, Fixed _Fixed1)
{
    if(_Fixed < _Fixed1)
        return _Fixed;
    return _Fixed1;
}